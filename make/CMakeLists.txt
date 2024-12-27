# Specify the minimum version of CMake
cmake_minimum_required(VERSION 3.10)

# Set the project name
set(APP_NAME "directories")
project(${APP_NAME})

# Set the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Define the build directory
set(BUILD_DIR "${CMAKE_CURRENT_SOURCE_DIR}/build")

# Create the build directory if it does not exist
file(MAKE_DIRECTORY ${BUILD_DIR})

# Add the executable target
add_executable(${APP_NAME}
    main.cpp
)

# Include directories for header files
target_include_directories(${APP_NAME} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
