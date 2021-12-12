set(BUILD_SHARED_LIBS ON)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin/lib)
SET(CMAKE_CXX_FLAGS_DEBUG "-O3")

add_library(SubMod1Shared
            Yuji.cpp
            SubMod1More/AdditionalFile.cpp)

target_include_directories(SubMod1Shared PUBLIC ${CMAKE_SOURCE_DIR}/include/SubMod1Shared)
