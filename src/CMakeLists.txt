set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/bin)

add_executable(Seemake Seemake.cpp)

target_include_directories(Seemake PUBLIC ${CMAKE_SOURCE_DIR}/include)

add_subdirectory(SubMod1Shared)
add_subdirectory(SubMod2Static)

target_link_libraries(Seemake PUBLIC 
                      SubMod1Shared
                      SubMod2Static)