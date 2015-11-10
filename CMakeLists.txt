cmake_minimum_required(VERSION 3.3)
project(SortingAlgorithm)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall -Wextra")

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/build")

set(SOURCE_FILES main.cpp Algorithms/SortingAlgorithmBase.h Algorithms/InsertSortAlgorithm.h Algorithms/SelectionSortAlgorithm.h Tests/TestSuiteService.h)
add_executable(SortingAlgorithm ${SOURCE_FILES})