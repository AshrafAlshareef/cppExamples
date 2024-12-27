::!/bin/bash
@echo off

:: Create a build directory
mkdir build

:: Change to the build directory
cd build

:: Run cmake to configure the project
cmake ..

:: Build the project
cmake --build .

:: Double Click on the build.bat to run the cmake
