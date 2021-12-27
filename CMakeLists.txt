cmake_minimum_required(VERSION 3.10)

project(pybind11_cmake_test)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# find_package could also be used if that's your cup of tea
add_subdirectory("vendor/pybind11")

# use warnings and multi threading
if("${CMAKE_CXX_COMPILER_ID}" STREQUAL "Clang")
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -pedantic")
elseif("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU")
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -pedantic")
elseif("${CMAKE_CXX_COMPILER_ID}" STREQUAL "MSVC")
  set(
    CMAKE_CXX_FLAGS
    "${CMAKE_CXX_FLAGS} /MP2 /DWIN32_LEAN_AND_MEAN /DNOMINMAX"
  )
endif()

add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/my_math_core")
add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/my_math")
