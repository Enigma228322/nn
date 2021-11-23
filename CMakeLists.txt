cmake_minimum_required(VERSION 3.5)

set(CMAKE_BUILD_TYPE Debug)

project (fast_inference)

add_subdirectory(libs/spdlog)
add_subdirectory(libs/simdjson)

set(HEADERS
    ./include
    libs/spdlog/include
    libs/simdjson/include
)
set(SOURCE
    src/nn.cpp
)

# Add an executable
add_executable(nn ${SOURCE})

target_include_directories(nn PUBLIC
    ${HEADERS}
)

target_link_libraries(nn PRIVATE
    spdlog
    simdjson
)
