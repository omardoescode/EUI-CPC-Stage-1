cmake_minimum_required(VERSION 3.8)
project(lec1)

set(CMAKE_BUILD_TYPE Debug)
set(DCMAKE_CXX_FLAGS_DEBUG "g -O0")
add_executable(main main.cpp)
