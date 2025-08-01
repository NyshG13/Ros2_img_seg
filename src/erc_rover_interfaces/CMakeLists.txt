cmake_minimum_required(VERSION 3.8)
project(erc_rover_interfaces)

find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
  "srv/GetDepth.srv"
  "srv/GetGPS.srv"
  "srv/GetYaw.srv" # Replace with your actual .srv/.msg files
)

ament_export_dependencies(rosidl_default_runtime)
ament_package()
