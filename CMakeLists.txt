cmake_minimum_required(VERSION 2.8.3)
project(qt_test)

## Compile as C++11, supported in ROS Kinetic and newer
# add_compile_options(-std=c++11)

## Find catkin macros and libraries
## if COMPONENTS list like find_package(catkin REQUIRED COMPONENTS xyz)
## is used, also find other catkin packages
find_package(catkin REQUIRED COMPONENTS
  roscpp
  rospy
  std_msgs
)

catkin_package(
#  INCLUDE_DIRS include
#  LIBRARIES qt_test
#  CATKIN_DEPENDS roscpp rospy std_msgs
#  DEPENDS system_lib
)

include_directories(
# include
  ${catkin_INCLUDE_DIRS}
)


## The recommended prefix ensures that target names across packages don't collide
 add_executable(talker src/talker.cpp)
 add_executable(listen src/listen.cpp)

## Specify libraries to link a library or executable target against
 target_link_libraries(talker ${catkin_LIBRARIES})
 target_link_libraries(listen ${catkin_LIBRARIES})
