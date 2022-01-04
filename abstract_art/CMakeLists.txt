cmake_minimum_required(VERSION 3.21)
project(abstract_art)

set(CMAKE_CXX_STANDARD 17)

add_executable(abstract_art main.cpp Polygon.cpp Polygon.h Point.cpp Point.h)
