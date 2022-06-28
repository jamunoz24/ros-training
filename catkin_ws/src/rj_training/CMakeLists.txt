cmake_minimum_required(VERSION 3.0.2)
project(rj_training)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  std_msgs
)

catkin_package()

include_directories(
  ${catkin_INCLUDE_DIRS}
)

add_executable(talker_node src/talker.cpp)
target_link_libraries(talker_node ${catkin_LIBRARIES})

add_executable(listener_node src/listener.cpp)
target_link_libraries(listener_node ${catkin_LIBRARIES})
