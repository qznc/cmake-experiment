cmake_minimum_required(VERSION 3.16.3)
project(foo
  VERSION 0.1.0
  DESCRIPTION "Very foo project"
  LANGUAGES CXX)

add_subdirectory(../add sub/add)

add_library(${CMAKE_PROJECT_NAME} src/${CMAKE_PROJECT_NAME}.cpp)
target_include_directories(${CMAKE_PROJECT_NAME}
  PUBLIC inc
  PRIVATE src)
target_link_libraries(${CMAKE_PROJECT_NAME}
  PRIVATE add)

add_executable(unittests-${CMAKE_PROJECT_NAME}
  test/test_${CMAKE_PROJECT_NAME}.cpp)
target_link_libraries(unittests-${CMAKE_PROJECT_NAME}
  PRIVATE ${CMAKE_PROJECT_NAME})

add_custom_target(unittestreport-${CMAKE_PROJECT_NAME}
  ./unittests-${CMAKE_PROJECT_NAME} >unittestreport-${CMAKE_PROJECT_NAME}.txt
  DEPENDS unittests-${CMAKE_PROJECT_NAME}
)

