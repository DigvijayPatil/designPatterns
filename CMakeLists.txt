# Minimum Version required
cmake_minimum_required(VERSION 3.5)
# Project Name
project(DesignPattern)

add_subdirectory(lib)

# Include Header file list
add_executable(DesignPattern src/DesignPatterns.cpp)

target_link_libraries(DesignPattern DesignLib)