# Minimum required CMake version
cmake_minimum_required(VERSION 3.12)

# Project name
project(testapp)

# Set C++ standard to C++17
set(CMAKE_CXX_STANDARD 17)

# Find the QT package
find_package(Qt6 COMPONENTS Network REQUIRED)

# Add the executable
add_executable(testapp main.cpp)

# Link the QT SSLSocket library
target_link_libraries(testapp PRIVATE Qt6::Network)