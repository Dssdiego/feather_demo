cmake_minimum_required(VERSION 3.20)
project(feather_demo)

set(CMAKE_CXX_STANDARD 17)

# load source and header files
file(GLOB_RECURSE SOURCE_FILES
        "src/*.h"
        "src/*.cpp"
)

add_executable(${PROJECT_NAME}
    ${SOURCE_FILES}
)

target_link_libraries(${PROJECT_NAME}
    #feather
)
