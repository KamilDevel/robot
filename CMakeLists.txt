# Minimum cmake version (defined by ev3compiler docker image)
cmake_minimum_required (VERSION 3.7)

# LEGO EV3 Robot project
project (Robot)

# Set compilers
set (CMAKE_CC_COMPILER "arm-linux-gnueabi-gcc")
set (CMAKE_CXX_COMPILER "arm-linux-gnueabi-g++")

# Current Project version
set (Robot_VERSION_MAJOR 0)
set (Robot_VERSION_MINOR 0)
set (Robot_VERSION_PATCH 1)

# Number of brick controllers
set (Robot_NUMBER_OF_BRICKS 1)

# Build code name
set (Robot_CODENAME APLHA)

# Configure main header file with value passed from cmake
configure_file (
    "${PROJECT_SOURCE_DIR}/src/main.hpp.in"
    "${PROJECT_SOURCE_DIR}/src/main.hpp"
)

# Add src directory for scanning
include_directories ("${PROJECT_SOURCE_DIR}/src")

# add_executable
add_executable (Robot "${PROJECT_SOURCE_DIR}/src/main.cpp" "${PROJECT_SOURCE_DIR}/robot-libs/libev3dev.a")