cmake_minimum_required(VERSION 3.10)

project(
    Seemake 
    VERSION 1.0 
    LANGUAGES CXX)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(src)
