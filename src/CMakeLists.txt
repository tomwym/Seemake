add_executable(Seemake Seemake.cpp)

target_include_directories(bar PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(Seemake SubMod1Shared)