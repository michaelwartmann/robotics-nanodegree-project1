cmake_minimum_required(VERSION 3.0 FATAL_ERROR)

# Set the project name
project(gazebo_world_plugin)

# Enable C++11 standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find the Gazebo package
find_package(gazebo REQUIRED)

# Include the Gazebo headers
include_directories(${GAZEBO_INCLUDE_DIRS})

# Link the Gazebo libraries
link_directories(${GAZEBO_LIBRARY_DIRS})

# Set the plugin source file
add_library(WelcomeMessagePlugin SHARED script/src/welcome_message.cpp)

# Link the plugin to the Gazebo libraries
target_link_libraries(WelcomeMessagePlugin ${GAZEBO_LIBRARIES})
