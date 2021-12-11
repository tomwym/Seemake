add_library(SubMod1Shared 
            Yuji.cpp
            SubMod1More/AdditionalFile.cpp)

target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
