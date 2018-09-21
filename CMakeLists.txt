cmake_minimum_required(VERSION 3.12)
project(untitled)

set(CMAKE_CXX_STANDARD 17)

add_library(untitled SHARED library.cpp library.h Client.cpp Client.h)
add_executable(untitled2 main.cpp)