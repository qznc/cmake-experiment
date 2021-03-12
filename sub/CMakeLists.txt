cmake_minimum_required(VERSION 3.16.3)
project(sub
  VERSION 0.1.0
  DESCRIPTION "Subtracting all the things"
  LANGUAGES CXX)

if(NOT TARGET rangecheck)
add_subdirectory(../rangecheck sub/rangecheck)
endif()

add_library(${PROJECT_NAME} src/${PROJECT_NAME}.cpp)
target_include_directories(${PROJECT_NAME}
  PUBLIC inc
  PRIVATE src)
target_link_libraries(${PROJECT_NAME}
  PRIVATE rangecheck)

add_executable(unittests-${PROJECT_NAME}
  test/test_${PROJECT_NAME}.cpp)
target_link_libraries(unittests-${PROJECT_NAME}
  PRIVATE ${PROJECT_NAME})

add_custom_target(unittestreport-${PROJECT_NAME}
  ./unittests-${PROJECT_NAME} >unittestreport-${PROJECT_NAME}.txt
  DEPENDS unittests-${PROJECT_NAME}
)

