cmake_minimum_required(VERSION 3.16.3)
project(foo
  VERSION 0.1.0
  DESCRIPTION "Very foo project"
  LANGUAGES CXX)

add_library(foo src/foo.cpp)
target_include_directories(foo
  PUBLIC inc
  PRIVATE src)

add_executable(unittests
  test/test_foo.cpp)
target_link_libraries(unittests
  PRIVATE foo)

add_custom_target(unittestreport
  ./unittests >unittestreport.txt
  DEPENDS unittests
)

