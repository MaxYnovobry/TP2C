cmake_minimum_required(VERSION 3.21)
project(TP2C__)

set(CMAKE_CXX_STANDARD 14)

file(GLOB_RECURSE SOURCES RELATIVE ${CMAKE_SOURCE_DIR} "Src/*.cpp" "Header/*.h" "main.cpp")
add_executable(TP2C ${SOURCES})
