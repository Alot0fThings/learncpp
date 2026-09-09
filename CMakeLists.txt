cmake_minimum_required(VERSION 4.3)
project(learnCpp)

set(CMAKE_CXX_STANDARD 20)

add_executable(learnCpp src/main.cpp
        include/Matrix.hpp
        src/Matrix.cpp)
