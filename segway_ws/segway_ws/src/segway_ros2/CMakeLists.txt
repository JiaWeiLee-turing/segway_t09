cmake_minimum_required(VERSION 3.8)
project(segway_ros2)


set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -funroll-loops -fpic -Wall -Wno-sign-compare -Werror=return-type -g")
set(CMAKE_C_FLAGS   "${CMAKE_C_FLAGS}   -fpic")

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wno-all -Wextra -Wpedantic -Wno-unused -Wdeprecated-copy)
endif()

# # find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(nav_msgs REQUIRED)
find_package(segway_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(tf2 REQUIRED)
find_package(tf2_ros REQUIRED)
find_package(tf2_geometry_msgs REQUIRED)
find_package(tier4_vehicle_msgs REQUIRED)
find_package(autoware_auto_vehicle_msgs REQUIRED)


include_directories(
  include
)

add_executable(drive_sample src/drive_segway_sample.cpp)
target_link_libraries(drive_sample
  ${PROJECT_SOURCE_DIR}/lib/libctrl_x86_64.so
)
ament_target_dependencies(drive_sample
  rclcpp
  std_msgs
  geometry_msgs
  nav_msgs
  segway_msgs
  sensor_msgs
  tf2
  tf2_ros
  tf2_geometry_msgs
  tier4_vehicle_msgs
  autoware_auto_vehicle_msgs
)

install(TARGETS
  drive_sample
  DESTINATION lib/${PROJECT_NAME})

ament_package()
