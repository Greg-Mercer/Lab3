cmake_minimum_required(VERSION 3.12)
project(Lab3)
set(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} -Wall -Wextra -pedantic")
add_executable(Lab3 main.cpp stack.cpp stack.hpp catch.hpp unit_tests.cpp)
