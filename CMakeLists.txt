cmake_minimum_required(VERSION 3.10)
project(cs225-final VERSION 0.1.0)
set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
set(CMAKE_MODULE_PATH "/Users/shikhar/Desktop/cs225-final-project/Catch2")

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
include(CTest)
include(CPack)

include_directories(include)
Include(FetchContent)
include_directories(tests)
FetchContent_Declare(
  Catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG        v3.0.1 # or a later release
)
FetchContent_MakeAvailable(Catch2)
add_executable(cs225-final main.cpp graph.cpp include/graph.h)
# target_link_libraries(cs225-final PRIVATE Catch2::Catch2WithMain)

add_executable(tests tests/tests.cpp graph.cpp)
target_link_libraries(tests PRIVATE Catch2::Catch2WithMain)

