cmake_minimum_required(VERSION 3.10)

file(GLOB_RECURSE SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp")
add_library(my_math STATIC ${SOURCES})
target_include_directories(my_math PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src")
target_include_directories(my_math INTERFACE "${CMAKE_CURRENT_SOURCE_DIR}/include")
