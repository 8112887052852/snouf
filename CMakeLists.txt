project(Snouf)

cmake_minimum_required(VERSION 3.11.0)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

include(GoogleTest)

add_subdirectory(depends)
add_subdirectory(libSnouf)
add_subdirectory(TestSnouf)

enable_testing()