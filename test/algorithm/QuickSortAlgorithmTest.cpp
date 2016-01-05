//
// Created by am3o on 17.12.15.
//

#include <gtest/gtest.h>

#include "../../algorithm/QuickSortAlgorithm.h"
#include "../../util/TestSuiteService.h"

#define SMALL_SIZE 50

using namespace std;

TEST(QuicksortAlgorithmTest, sortEmptyListWithoutGuardian) {
    array<int, SMALL_SIZE>* testArray = new array<int, SMALL_SIZE>();
    array<int, SMALL_SIZE> expectedArray = *testArray;

    EXPECT_EQ(expectedArray, *testArray);
}
