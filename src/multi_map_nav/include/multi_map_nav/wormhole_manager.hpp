#ifndef WORMHOLE_MANAGER_HPP
#define WORMHOLE_MANAGER_HPP

#include <string>
#include <utility>
#include <sqlite3.h>
#include <rclcpp/rclcpp.hpp>

class WormholeManager {
public:
    WormholeManager(const std::string &db_path);
    ~WormholeManager();
    std::pair<double, double> getWormholeToMap(const std::string& current_map, const std::string& target_map); 
private:
    sqlite3* db_;

};

#endif
