cmake_minimum_required(VERSION 3.14)
project(Lab4)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Lab4
        Main.cpp
        Shape.cpp
        Shape.h)
