cmake_minimum_required(VERSION 3.16.3)
project(add
  VERSION 0.1.0
  DESCRIPTION "Adding all the things"
  LANGUAGES CXX)

add_library(${PROJECT_NAME} src/${PROJECT_NAME}.cpp)
target_include_directories(${PROJECT_NAME}
  PUBLIC inc
  PRIVATE src)

add_executable(unittests-${PROJECT_NAME}
  test/test_${PROJECT_NAME}.cpp)
target_link_libraries(unittests-${PROJECT_NAME}
  PRIVATE ${PROJECT_NAME})

add_custom_target(unittestreport-${PROJECT_NAME}
  ./unittests-${PROJECT_NAME} >unittestreport-${PROJECT_NAME}.txt
  DEPENDS unittests-${PROJECT_NAME}
)

