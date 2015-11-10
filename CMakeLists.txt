cmake_minimum_required(VERSION 3.3)
project(SortingAlgorithm)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall -Wextra")

set(SOURCE_FILES main.cpp Algorithm/SortingAlgorithmBase.h Algorithm/InsertSortAlgorithm.h Algorithm/SelectionSortAlgorithm.h)
add_executable(SortingAlgorithm ${SOURCE_FILES})