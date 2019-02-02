cmake_minimum_required(VERSION 2.8.9)
project (Chip8Dale)
SET(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
SET(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
SET(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

#[[the following two lines were recommended but do not seem to be needed]]
#find_package(SDL2 REQUIRED)
#include_directories(${SDL2_INCLUDE_DIRS})

add_executable(Chip8Dale src/main.cpp src/chip8.cpp)
target_link_libraries(Chip8Dale ${SDL2_LIBRARIES})