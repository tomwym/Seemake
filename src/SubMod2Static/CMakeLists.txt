set(BUILD_SHARED_LIBS OFF)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY  ${CMAKE_SOURCE_DIR}/bin/lib)
SET(CMAKE_CXX_FLAGS_DEBUG "-O3")

add_library(SubMod2Static
            Rika.cpp
            Yuta.cpp)

target_include_directories(SubMod2Static PUBLIC ${CMAKE_SOURCE_DIR}/include/SubMod2Static)
