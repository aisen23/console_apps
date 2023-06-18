cmake_minimum_required(VERSION 3.26)

set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17")

project(console_apps VERSION 1.0.0)

include_directories(src)
file(GLOB_RECURSE SRC_FILES src/*.h src/*/*.h src/*.cpp src/*/*.cpp)

add_executable(console_apps ${SRC_FILES})

