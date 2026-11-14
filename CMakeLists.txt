cmake_minimum_required(VERSION 3.15)    
project(jltest VERSION 0.0.0 LANGUAGES CXX)

add_executable(jltest)
target_include_directories(jltest PRIVATE include)
target_sources(jltest PRIVATE
src/main.cpp
src/Node.cpp
include/Node.h
)
