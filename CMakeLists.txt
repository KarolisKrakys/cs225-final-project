cmake_minimum_required(VERSION 3.0.0)
project(cs225-final VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
include(CTest)

enable_testing()
include_directories(include)
add_executable(cs225-final main.cpp graph.cpp include/graph.h)


set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
