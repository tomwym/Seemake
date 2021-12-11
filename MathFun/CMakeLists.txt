add_library(MathFun mysqrt.cpp)

target_include_directories(MathFun
        INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}
        )