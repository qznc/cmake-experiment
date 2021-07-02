cmake_minimum_required(VERSION 3.16.3)
include_guard(GLOBAL)
project(foo
  VERSION 0.1.0
  DESCRIPTION "Very foo project"
  LANGUAGES CXX)

add_subdirectory(../add sub/add)
add_subdirectory(../sub sub/sub)

add_library(${PROJECT_NAME} src/${PROJECT_NAME}.cpp)
target_include_directories(${PROJECT_NAME}
  PUBLIC inc
  PRIVATE src)
target_link_libraries(${PROJECT_NAME}
  PRIVATE add sub)

add_executable(unittests-${PROJECT_NAME}
  test/test_${PROJECT_NAME}.cpp)
target_link_libraries(unittests-${PROJECT_NAME}
  PRIVATE ${PROJECT_NAME})

add_custom_target(unittestreport-${PROJECT_NAME}
  ./unittests-${PROJECT_NAME} >unittestreport-${PROJECT_NAME}.txt
  DEPENDS unittests-${PROJECT_NAME}
)

