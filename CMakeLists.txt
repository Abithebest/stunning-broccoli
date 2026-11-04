cmake_minimum_required(VERSION 3.10)
project(Simulation VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
add_executable(Simulation src/main.cpp)

target_sources(Simulation PRIVATE
    src/core/Simulation.cpp
    src/core/Random.cpp
)

target_include_directories(Simulation PRIVATE 
    ${CMAKE_CURRENT_SOURCE_DIR}/include
    ${CMAKE_CURRENT_SOURCE_DIR}/src
)