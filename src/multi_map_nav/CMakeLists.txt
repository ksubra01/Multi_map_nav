cmake_minimum_required(VERSION 3.8)
project(multi_map_nav)

# Enable C++17
set(CMAKE_CXX_STANDARD 17)
include(FindPkgConfig)
pkg_check_modules(SQLITE3 REQUIRED sqlite3)
# Find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclcpp_action REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(nav2_msgs REQUIRED)
find_package(std_msgs REQUIRED)
find_package(nav_msgs REQUIRED)
find_package(tf2 REQUIRED)
find_package(tf2_geometry_msgs REQUIRED)
find_package(ament_cmake_auto REQUIRED)
find_package(rosidl_default_generators REQUIRED)

# Action definition
rosidl_generate_interfaces(${PROJECT_NAME}
  "action/NavigateToGoal.action"
)

# Include dirs
include_directories(
  include
  maps
  )

# Executable for action server
add_executable(navigation_server_node
  src/navigation_server.cpp
  src/switch_map.cpp
  src/wormhole_manager.cpp
)

ament_target_dependencies(navigation_server_node
  rclcpp
  rclcpp_action
  geometry_msgs
  nav2_msgs
  std_msgs
  nav_msgs
  tf2
  tf2_geometry_msgs
)

#Genertae action support
rosidl_get_typesupport_target(cpp_typesupport_target "${PROJECT_NAME}" "rosidl_typesupport_cpp")
target_link_libraries(navigation_server_node ${cpp_typesupport_target})

# Link sqlite3 library
target_include_directories(navigation_server_node PRIVATE ${SQLITE3_INCLUDE_DIRS})
target_link_libraries(navigation_server_node ${SQLITE3_LIBRARIES})

link_libraries(sqlite3)

# Python test client
install(PROGRAMS
  send_goal.py
  DESTINATION lib/${PROJECT_NAME}
)

# Install targets
install(TARGETS
  navigation_server_node
  DESTINATION lib/${PROJECT_NAME}
)

# Install headers
install(DIRECTORY include/
  DESTINATION include/
)

# Install launch and maps
install(DIRECTORY launch
  DESTINATION share/${PROJECT_NAME}
)
install(DIRECTORY maps
  DESTINATION share/${PROJECT_NAME}
)

# Install action
install(DIRECTORY action
  DESTINATION share/${PROJECT_NAME}
)

ament_export_dependencies(rosidl_default_runtime)

ament_package()