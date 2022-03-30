cmake_minimum_required(VERSION 3.21)
project(Lab4)

set(CMAKE_CXX_STANDARD 14)

add_executable(Lab4 main.cpp point/point.cpp point/point.h option/option.cpp option/option.h menu/menu.cpp menu/menu.h tests/tests.cpp tests/tests.h triangle/triangle.cpp triangle/triangle.h)
