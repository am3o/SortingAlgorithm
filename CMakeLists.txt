cmake_minimum_required(VERSION 3.3)
project(SortingAlgorithm)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=gnu++0x")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall -Wextra -O3")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/build")

set(SOURCE_FILES main.cpp algorithm/SortingAlgorithmBase.h algorithm/InsertSortAlgorithm.h algorithm/SelectionSortAlgorithm.h util/TestSuiteService.h benchmark/BenchmarkRunner.h algorithm/QuickSortAlgorithm.h algorithm/MergeSortAlgorithm.h)
add_executable(SortingAlgorithm ${SOURCE_FILES})

add_subdirectory(test)