#ifndef SWTICH_MAP_CPP
#define SWITCH_MAP_CPP

#include "multi_map_nav/switch_map.hpp"
#include <ament_index_cpp/get_package_share_directory.hpp>
#include <nav2_msgs/srv/load_map.hpp>
#include <rclcpp/rclcpp.hpp>
#include <tf2/LinearMath/Quaternion.h>
#include <tf2_geometry_msgs/tf2_geometry_msgs.hpp>
#include <fstream>
#include <chrono>

using namespace std::chrono_literals;

SwitchMap::SwitchMap(rclcpp::Node* parent_node) : Node("switch_map")
{
    this->declare_parameter<std::string>("map_folder", "");
    if(!this->get_parameter("map_folder", path_to_map_) || path_to_map_.empty())
    {
        path_to_map_ = ament_index_cpp::get_package_share_directory("multi_map_nav") + "/maps";
        RCLCPP_WARN(this->get_logger(), "'path_to_map_' parameter not set. using default: %s", path_to_map_.c_str());
    }
    load_map_client_ = this->create_client<nav2_msgs::srv::LoadMap>("/map_server/load_map", rmw_qos_profile_services_default);
}
void SwitchMap::SwitchToMap(const std::string &map_name)
{
    std::string map_yaml_path = path_to_map_ + "/" + map_name + ".yaml";
    std::ifstream map_file(map_yaml_path);
    if (!map_file.is_open())
    {
        RCLCPP_ERROR(this->get_logger(), "Failed to open map file: %s", map_yaml_path.c_str());
        return;
    }

    std::string line;
    bool valid = false;
    while (std::getline(map_file, line)) {
        if(line.find("image:") != std::string::npos) {
            valid = true;
            break;
        }
    }

    if(!valid){
        RCLCPP_ERROR(this->get_logger(), "Invalid map file format: %s", map_yaml_path.c_str());
        return;
    }
    map_file.close();

    if(!load_map_client_->wait_for_service(2s)) {
        RCLCPP_ERROR(this->get_logger(), "Map server service not available.");
        return;
    }

    // Prepare the request to send to server.
    auto request = std::make_shared<nav2_msgs::srv::LoadMap::Request>();
    request->map_url = map_yaml_path;

    // Send request to server and get the result
    auto future_result = load_map_client_->async_send_request(request);

    if(rclcpp::spin_until_future_complete(this->get_node_base_interface(), future_result)
        != rclcpp::FutureReturnCode::SUCCESS) {
        RCLCPP_ERROR(this->get_logger(), "Failed to call load_map service.");
        return;
    }
    auto response = future_result.get();

    if(response->result == nav2_msgs::srv::LoadMap::Response::RESULT_SUCCESS) {
        RCLCPP_INFO(this->get_logger(), "Successfully switched to map: %s", map_name.c_str());
    }
    else {
        RCLCPP_INFO(this->get_logger(), "Failed to switch map: %s", map_name.c_str());
    }
}
#endif