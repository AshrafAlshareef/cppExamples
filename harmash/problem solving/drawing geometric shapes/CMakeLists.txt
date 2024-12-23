# Specify the minimum version of CMake
cmake_minimum_required(VERSION 3.10)

# Set the project name
project(GeometricShapesDrawing)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Define the build directory
set(BUILD_DIR "${CMAKE_CURRENT_SOURCE_DIR}/build")

# Create the build directory if it does not exist
file(MAKE_DIRECTORY ${BUILD_DIR})

# Add the executable target
add_executable(GeometricShapesDrawing
    main.cpp
    geometric_shapes_drawing_1.cpp
    geometric_shapes_drawing_2.cpp
    geometric_shapes_drawing_3.cpp
)

# Include directories for header files
target_include_directories(GeometricShapesDrawing PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
