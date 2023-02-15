cmake_minimum_required(VERSION 3.20)
project(feather_demo)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#include feather
#include_directories(feather)
add_subdirectory(feather)

# load source and header files
file(GLOB_RECURSE SOURCE_FILES
        "src/*.h"
        "src/*.cpp"
)

# copying necessary files for project to run
file(COPY
    "${CMAKE_SOURCE_DIR}/dlls/fmod.dll" # for production use
    "${CMAKE_SOURCE_DIR}/dlls/fmodstudio.dll" # for production use
    DESTINATION ${CMAKE_BINARY_DIR})
file(COPY "${CMAKE_SOURCE_DIR}/dlls/steam_api64.dll" DESTINATION ${CMAKE_BINARY_DIR})
file(COPY "${CMAKE_SOURCE_DIR}/dlls/yaml-cppd.dll" DESTINATION ${CMAKE_BINARY_DIR})

add_executable(${PROJECT_NAME}
    ${SOURCE_FILES}
)

target_link_libraries(${PROJECT_NAME} 
    feather
)
