cmake_minimum_required(VERSION 3.10)

option(USE_MYMATH "use tutorial provided math implemenation" OFF)

project(
    Seemake 
    VERSION 1.0 
    LANGUAGES CXX)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(src)
