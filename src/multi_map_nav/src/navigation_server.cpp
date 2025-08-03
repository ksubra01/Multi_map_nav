#include "multi_map_nav/navigation_server.hpp"
#include "multi_map_nav/action/navigate_to_goal.hpp"
#include <rclcpp_action/rclcpp_action.hpp>
#include <geometry_msgs/msg/pose_stamped.hpp>
#include <tf2/LinearMath/Quaternion.h>
#include <tf2_geometry_msgs/tf2_geometry_msgs.hpp>
#include <nav2_msgs/action/navigate_to_pose.hpp>
#include <thread>
#include <chrono>

using namespace std::chrono_literals;

NavigationServer::NavigationServer(const std::string &db_path) 
: rclcpp::Node("navigation_server_node"),
  wormhole_manager_(db_path), 
  switch_map_(this)
{
    current_map_ = "map1";
    std::cout<<"The type of this is: "<<typeid(this).name()<<std::endl;
    action_server_ = rclcpp_action::create_server<multi_map_nav::action::NavigateToGoal>(
        this,
        "navigate_to_goal",
        std::bind(&NavigationServer::handle_goal, this, std::placeholders::_1, std::placeholders::_2),
        std::bind(&NavigationServer::handle_cancel, this, std::placeholders::_1),
        std::bind(&NavigationServer::handle_accepted, this, std::placeholders::_1)
    );

    nav2_client_ = rclcpp_action::create_client<nav2_msgs::action::NavigateToPose>(this, "navigate_to_pose");

    RCLCPP_INFO(this->get_logger(), "Navigation action server ready.");
}

bool NavigationServer::move_base_to(double x, double y, double yaw)
{
    if (!nav2_client_->wait_for_action_server(std::chrono::seconds(5))) {
        RCLCPP_ERROR(this->get_logger(), "Nav2 action server not available!");
        return false;
    }

    auto goal_msg = nav2_msgs::action::NavigateToPose::Goal();
    goal_msg.pose.header.frame_id = "map";
    goal_msg.pose.header.stamp = now();
    goal_msg.pose.pose.position.x = x;
    goal_msg.pose.pose.position.y = y;
    tf2::Quaternion q;
    q.setRPY(0,0,yaw);
    q.normalize();
    goal_msg.pose.pose.orientation = tf2::toMsg(q);

    auto future_goal = nav2_client_->async_send_goal(goal_msg);
    if (rclcpp::spin_until_future_complete(this->get_node_base_interface(), future_goal) != rclcpp::FutureReturnCode::SUCCESS)
    {
        RCLCPP_ERROR(this->get_logger(), "Failed to send goal to nav2");
        return false;
    }

    auto goal_handle = future_goal.get();
    if (!goal_handle || goal_handle->get_status() != rclcpp_action::GoalStatus::STATUS_ACCEPTED) {
        RCLCPP_ERROR(this->get_logger(), "Failed to accept goal in nav2");
        return false;
    }

    // Get the result
    RCLCPP_INFO(this->get_logger(), "Received result from nav2");
    auto result = goal_handle;
    if (!result) {
        RCLCPP_ERROR(this->get_logger(), "Failed to get result from nav2");
        return false;
    }

    // Wait for the action server to finish processing the goal
    RCLCPP_INFO(this->get_logger(), "Navigation succeeded");

    auto future_result = nav2_client_->async_get_result(goal_handle);
    if (rclcpp::spin_until_future_complete(this->get_node_base_interface(), future_result) != rclcpp::FutureReturnCode::SUCCESS)
    {
        RCLCPP_ERROR(this->get_logger(), "Failed to recieve result from nav2");
        return false;
    }
    auto final_result = future_result.get();
    return final_result.code == rclcpp_action::ResultCode::SUCCEEDED;
}

rclcpp_action::GoalResponse NavigationServer::handle_goal(
    const rclcpp_action::GoalUUID &uuid,
    const std::shared_ptr<const multi_map_nav::action::NavigateToGoal::Goal> goal)
{
    RCLCPP_INFO(this->get_logger(), "Recieved goal to map");
    (void)uuid;  // Suppress unused variable warning
    return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
}

rclcpp_action::CancelResponse NavigationServer::handle_cancel(const std::shared_ptr<GoalHandle> goal_handle)
{
    RCLCPP_INFO(this->get_logger(), "Goal cancelled");
    return rclcpp_action::CancelResponse::ACCEPT;
}

void NavigationServer::handle_accepted(const std::shared_ptr<GoalHandle> goal_handle)
{// Can start a new thread to handle the goal.
    std::thread{[this, goal_handle]() {
        auto goal = goal_handle->get_goal();
        auto result = std::make_shared<multi_map_nav::action::NavigateToGoal::Result>();

        double yaw = M_PI / 2;

        if (goal->target_map == current_map_) {
            if (!move_base_to(goal->target_x, goal->target_y, yaw)) {
                result->success = false;
                result->message = "Failed to reach goal.";
                goal_handle->abort(result);
                return;
            }
            result->success = true;
            result->message = "Goal reached.";
            goal_handle->succeed(result);
            return;
        }

        auto wormhole = wormhole_manager_.getWormholeToMap(current_map_, goal->target_map);
        if (wormhole.first == -9999 || wormhole.second == -9999) {
            result->success = false;
            result->message = "No wormhole found.";
            goal_handle->abort(result);
            return;
        }

        if(!move_base_to(wormhole.first, wormhole.second, yaw)) {
            result->success = false;
            result->message = "Failed to reach wormhole.";
            goal_handle->abort(result);
            return;
        }

        switch_map_.SwitchToMap(goal->target_map);
        current_map_ = goal->target_map;

        if(!move_base_to(goal->target_x, goal->target_y, yaw)) {
            result->success = false;
            result->message = "Failed to reach overall goal.";
            goal_handle->abort(result);
            return;
        }
        result->success = true;
        result->message = "Goal reached.";
        goal_handle->succeed(result);
    }}.detach();
}

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<NavigationServer>("wormholes.db") ;//need to add /Database in the include directories CMake.
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}

