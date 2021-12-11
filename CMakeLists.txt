cmake_minimum_required(VERSION 3.10)

option(USE_MYMATH "use tutorial provided math implemenation" ON)

project(seemake VERSION 1.0 LANGUAGES CXX)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# configure a header file to pass some of the CMake settings to src code
configure_file(TutorialConfig.h.in TutorialConfig.h)

# add the MathFun library
if(USE_MATH)
    add_subdirectory(MathFun)
    list(APPEND EXTRA_LIBS MathFun)
endif()

add_subdirectory(MathFun)
add_subdirectory(SubMod1Shared)

# add the executable
add_executable(seemake seemake.cpp)

target_link_libraries(seemake PUBLIC ${EXTRA_LIBS})

# add the binary tree to the search path for the include files
# so that we will find headerse
target_include_directories(seemake PUBLIC
                           "${PROJECT_BINARY_DIR}"
                          )

