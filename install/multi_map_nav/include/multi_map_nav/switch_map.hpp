#ifndef SWITCH_MAP_HPP
#define SWITCH_MAP_HPP

#include <rclcpp/rclcpp.hpp>
#include <nav2_msgs/srv/load_map.hpp>
#include <iostream>
#include <string>
#include <fstream>

class SwitchMap: public rclcpp::Node {
public:
    SwitchMap(rclcpp::Node* parent_node = nullptr);  // Constructor with optional parent node
    ~SwitchMap() = default;

    // Function to switch to a specific map
    // This function will load the map from the specified path and set it as the current map
    // It will also handle any necessary cleanup or state management
    void SwitchToMap(const std::string &map_name);

private:
    std::string path_to_map_;
    rclcpp::Client<nav2_msgs::srv::LoadMap>::SharedPtr load_map_client_;

};


#endif