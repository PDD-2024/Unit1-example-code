cmake_minimum_required(VERSION 3.22.1)

project(Geometry)

set(CMAKE_CXX_STANDARD 11)

add_subdirectory(geometry)

add_executable(Geometry main.cpp)

target_link_libraries(Geometry geometry)