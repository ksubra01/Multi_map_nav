#ifndef NAVIGATION_SERVER_HPP
#define NAVIGATION_SERVER_HPP

#include <rclcpp_action/rclcpp_action.hpp>
#include "switch_map.hpp"
#include "wormhole_manager.hpp"
#include "multi_map_nav/action/navigate_to_goal.hpp"
#include <nav2_msgs/action/navigate_to_pose.hpp>
#include <nav2_msgs/srv/load_map.hpp>
#include <rclcpp/rclcpp.hpp>
#include <string>
#include <geometry_msgs/msg/pose_stamped.hpp>
#include <tf2/LinearMath/Quaternion.hpp>
#include <tf2_geometry_msgs/tf2_geometry_msgs.hpp>

class NavigationServer : public rclcpp::Node {
public:
    using NavigateToGoal = multi_map_nav::action::NavigateToGoal;
    using Nav2NavigateToPose = nav2_msgs::action::NavigateToPose;
    using Nav2Client = rclcpp_action::Client<Nav2NavigateToPose>;
    using GoalHandle= rclcpp_action::ServerGoalHandle<NavigateToGoal>;
    explicit NavigationServer(const std::string& db_path);

private:
    rclcpp_action::GoalResponse handle_goal(const rclcpp_action::GoalUUID &uuid, std::shared_ptr<const multi_map_nav::action::NavigateToGoal> goal);
    rclcpp_action::CancelResponse handle_cancel(const std::shared_ptr<GoalHandle> goal_handle);
    void handle_accepted(const std::shared_ptr<GoalHandle> goal_handle);
    rclcpp_action::Server<NavigateToGoal>::SharedPtr action_server_; //Action server that handles goal, result, feedback



    std::shared_ptr<Nav2Client> nav2_client_;

    WormholeManager wormhole_manager_;
    SwitchMap switch_map_;
    std::string current_map_;

    bool move_base_to(double x, double y, double yaw);
};


#endif