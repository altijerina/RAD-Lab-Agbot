cmake_minimum_required(VERSION 3.22)
project(agbot_setup_moveit)

find_package(ament_cmake REQUIRED)
find_package(moveit_visual_tools REQUIRED)

ament_package()

# ament_target_dependencies(
#   hello_moveit
#   "moveit_ros_planning_interface"
#   "moveit_visual_tools"
#   "rclcpp"
# )

install(DIRECTORY launch DESTINATION share/${PROJECT_NAME}
  PATTERN "setup_assistant.launch" EXCLUDE)
install(DIRECTORY config DESTINATION share/${PROJECT_NAME})
install(FILES .setup_assistant DESTINATION share/${PROJECT_NAME})
