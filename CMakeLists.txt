# Minimum cmake version (defined by ev3compiler docker image)
cmake_minimum_required (VERSION 3.7)

# LEGO EV3 Robot project
project (Robot)

# Set compilers
set (CMAKE_C_COMPILER arm-linux-gnueabi-c)
set (CMAKE_CC_COMPILER arm-linux-gnueabi-gcc)
set (CMAKE_CXX_COMPILER arm-linux-gnueabi-g++)

# Add compilation flags
set (CMAKE_CXX_FLAGS "-std=c++17 -pthread")

# Current Project version
set (VERSION_MAJOR 1)
set (VERSION_MINOR 0)
set (VERSION_PATCH 0)

# Number of brick controllers
set (NUMBER_OF_BRICKS 1)

# Build code name
set (CODENAME alpha)

# Configure main header file with values passed from cmake
configure_file (
    ${PROJECT_SOURCE_DIR}/src/main.hpp.in
    ${PROJECT_SOURCE_DIR}/src/main.hpp
)

# Add src directory for scanning
include_directories (${PROJECT_SOURCE_DIR}/src)

# Add all required to executable :TODO split for more flexibility
add_executable (
    Robot 
    ${PROJECT_SOURCE_DIR}/src/main.cpp
    ${PROJECT_SOURCE_DIR}/src/robot/Application.cpp
    ${PROJECT_SOURCE_DIR}/src/robot/application/State.cpp
    ${PROJECT_SOURCE_DIR}/src/robot/application/feature/Remote.cpp
    ${PROJECT_SOURCE_DIR}/src/robot/logger/Console.cpp 
)

# Add all libraies to the linker
target_link_libraries (Robot ${PROJECT_SOURCE_DIR}/libs/libev3dev.a)
