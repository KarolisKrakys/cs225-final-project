cmake_minimum_required(VERSION 3.10)
project(cs225-final VERSION 0.1.0)
set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
include(CTest)
include(CPack)

include_directories(include)
add_executable(cs225-final main.cpp graph.cpp include/graph.h tests.cpp)

