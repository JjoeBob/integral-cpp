cmake_minimum_required(VERSION 4.3)
project(integral)

set(CMAKE_CXX_STANDARD 20)

add_executable(integral main.cpp
        Math.h
        Math.cpp)
