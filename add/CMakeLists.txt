cmake_minimum_required(VERSION 3.16.3)
project(add
  VERSION 0.1.0
  DESCRIPTION "Adding all the things"
  LANGUAGES CXX)

add_library(add src/add.cpp)
target_include_directories(add
  PUBLIC inc
  PRIVATE src)

add_executable(unittests
  test/test_add.cpp)
target_link_libraries(unittests
  PRIVATE add)

add_custom_target(unittestreport
  ./unittests >unittestreport.txt
  DEPENDS unittests
)

