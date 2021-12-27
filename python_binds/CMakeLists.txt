cmake_minimum_required(VERSION 3.10)

file(GLOB_RECURSE SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp")
pybind11_add_module(my_math_python ${SOURCES})
target_include_directories(my_math_python PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src")

target_link_libraries(my_math_python PRIVATE my_math)
