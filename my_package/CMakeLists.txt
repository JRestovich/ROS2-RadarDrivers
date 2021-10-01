cmake_minimum_required(VERSION 3.5)
project(my_package) #use the name declared in package.xml #since now "${PROJECT_NAME}" = my_package

# Default to C99
#if(NOT CMAKE_C_STANDARD)
 # set(CMAKE_C_STANDARD 99)
#endif()

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
# Add all the libraries nedeed
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)

find_package(PCL REQUIRED)

find_package(std_msgs REQUIRED)
find_package(pcl_msgs REQUIRED)
find_package(pcl_conversions REQUIRED)
find_package(Eigen3 REQUIRED)
find_package(VTK REQUIRED)

find_package(visualization_msgs REQUIRED)
find_package(serial_driver REQUIRED)

find_package(sensor_msgs REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(builtin_interfaces REQUIRED)
# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)

# ADD coustom msg and server messages 
rosidl_generate_interfaces(  newmsg
  "msg/RadarScan.msg"
  DEPENDENCIES builtin_interfaces std_msgs sensor_msgs
 )

include_directories(${PCL_INCLUDE_DIRS}) 
link_directories(${PCL_LIBRARY_DIRS})
add_definitions(${PCL_DEFINITIONS})

#ADD a library and then add the requiered dependencies
# add_library(DataHandlerClass src/DataHandlerClass.cpp)
# ament_target_dependencies(DataHandlerClass rclcpp std_msgs pcl_msgs pcl_conversions visualization_msgs sensor_msgs rosidl_default_generators) 

#ADD a library and then add the requiered dependencies
# add_library(mmWave src/mmWave.cpp) 
# ament_target_dependencies(mmWave rclcpp serial_driver)

#ADD an executable and then add the requiered dependencies
# add_executable(my_node src/my_node.cpp)
# ament_target_dependencies(my_node rclcpp std_msgs pcl_msgs pcl_conversions )
# target_link_libraries (my_node ${PCL_LIBRARIES} DataHandlerClass)

#target_include_directories(DataHandlerClass
 # PUBLIC
  #  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/my_package>
   # $<INSTALL_INTERFACE:include>)

#target_include_directories(mmWave 
 # PUBLIC
  #  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/my_package>
   # $<INSTALL_INTERFACE:include>)

#install(TARGETS my_node
 # DESTINATION lib/${PROJECT_NAME})

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # uncomment the line when a copyright and license is not present in all source files
  #set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # uncomment the line when this package is not in a git repo
  #set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
