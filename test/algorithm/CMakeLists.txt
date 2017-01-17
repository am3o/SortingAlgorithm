include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(runAlgorithmTest
        InsertSortAlgorithmTest.cpp
        SelectionSortAlgorithmTest.cpp
        MergeSortAlgorithmTest.cpp
        QuickSortAlgorithmTest.cpp
        ../../util/TestSuiteService.h)

target_link_libraries(runAlgorithmTest gtest gtest_main)