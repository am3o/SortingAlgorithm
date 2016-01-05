/*
 * author: Joshua Braun
 */

#include <gtest/gtest.h>
#include "../../algorithm/SelectionSortAlgorithm.h"
#include "../../util/TestSuiteService.h"

#define SMALL_SIZE 5
#define LARGE_SIZE 10000

using namespace std;

TEST(SelectionSortAlgorithmTest, sortEmptyIntegerListUnoptimized) {
    int expectedValue = 0;
    array<int, SMALL_SIZE>* testArray = new array<int, SMALL_SIZE>();

    TestSuiteService service;
    service.fillArrayWithValue(*testArray, expectedValue);

    SelectionSortAlgorithm algorithm;
    algorithm.sortUnoptimized(*testArray);

    EXPECT_TRUE(service.verifyExpectedValueAlgorithmResult(expectedValue, *testArray));
    delete testArray;
}

TEST(SelectionSortAlgorithmTest, sortASCIntegerListUnoptimized) {
    array<int, SMALL_SIZE>* testArray = new array<int, SMALL_SIZE>();

    TestSuiteService service;
    service.fillArrayAsc(*testArray);

    SelectionSortAlgorithm algorithm;
    algorithm.sortUnoptimized(*testArray);

    EXPECT_TRUE(service.verifyAlgorithmResult(*testArray));
    delete testArray;
}

TEST(SelectionSortAlgorithmTest, sortDESCIntegerListUnoptimized) {
    array<int, SMALL_SIZE>* testArray = new array<int, SMALL_SIZE>();

    TestSuiteService service;
    service.fillArrayDesc(*testArray);

    SelectionSortAlgorithm algorithm;
    algorithm.sortUnoptimized(*testArray);

    EXPECT_TRUE(service.verifyAlgorithmResult(*testArray));
    delete testArray;
}

TEST(SelectionSortAlgorithmTest, sortLargeIntegerListUnoptimized) {
    array<int, LARGE_SIZE>* testArray = new array<int, LARGE_SIZE>();

    TestSuiteService service;
    service.fillArrayDesc(*testArray);

    SelectionSortAlgorithm algorithm;
    algorithm.sortUnoptimized(*testArray);

    EXPECT_TRUE(service.verifyAlgorithmResult(*testArray));
    delete testArray;
}

TEST(SelectionSortAlgorithmTest, sortEmptyDoubleListUnoptimized) {
    double expectedValue = 0.0;
    array<double, SMALL_SIZE>* testArray = new array<double, SMALL_SIZE>();

    TestSuiteService service;
    service.fillArrayWithValue(*testArray, expectedValue);

    SelectionSortAlgorithm algorithm;
    algorithm.sortUnoptimized(*testArray);

    EXPECT_TRUE(service.verifyExpectedValueAlgorithmResult(expectedValue, *testArray));
    delete testArray;
}

TEST(SelectionSortAlgorithmTest, sortASCIDoubleListUnoptimized) {
    array<double, SMALL_SIZE>* testArray = new array<double, SMALL_SIZE>();

    TestSuiteService service;
    service.fillArrayAsc(*testArray);

    SelectionSortAlgorithm algorithm;
    algorithm.sortUnoptimized(*testArray);

    EXPECT_TRUE(service.verifyAlgorithmResult(*testArray));
    delete testArray;
}

TEST(SelectionSortAlgorithmTest, sortDESCDoubleListUnoptimized) {
    array<double, SMALL_SIZE>* testArray = new array<double, SMALL_SIZE>();

    TestSuiteService service;
    service.fillArrayDesc(*testArray);

    SelectionSortAlgorithm algorithm;
    algorithm.sortUnoptimized(*testArray);

    EXPECT_TRUE(service.verifyAlgorithmResult(*testArray));
    delete testArray;
}

TEST(SelectionSortAlgorithmTest, sortLargeDoubleListUnoptimized) {
    array<double, LARGE_SIZE>* testArray = new array<double, LARGE_SIZE>();

    TestSuiteService service;
    service.fillArrayDesc(*testArray);

    SelectionSortAlgorithm algorithm;
    algorithm.sortUnoptimized(*testArray);

    EXPECT_TRUE(service.verifyAlgorithmResult(*testArray));
    delete testArray;
}

TEST(SelectionSortAlgorithmTest, sortEmptyStringListUnoptimized) {
    string expectedValue = "";
    array<string, SMALL_SIZE>* testArray = new array<string, SMALL_SIZE>();

    TestSuiteService service;
    service.fillArrayWithValue(*testArray, expectedValue);

    SelectionSortAlgorithm algorithm;
    algorithm.sortUnoptimized(*testArray);

    EXPECT_TRUE(service.verifyExpectedValueAlgorithmResult(expectedValue, *testArray));
    delete testArray;
}

TEST(SelectionSortAlgorithmTest, sortASCStringListUnoptimized) {
    array<string, SMALL_SIZE>* testArray = new array<string, SMALL_SIZE>();

    TestSuiteService service;
    service.fillArrayAsc(*testArray);

    SelectionSortAlgorithm algorithm;
    algorithm.sortUnoptimized(*testArray);

    EXPECT_TRUE(service.verifyAlgorithmResult(*testArray));
    delete testArray;
}

TEST(SelectionSortAlgorithmTest, sortDESCStringListUnoptimized) {
    array<string, SMALL_SIZE>* testArray = new array<string, SMALL_SIZE>();

    TestSuiteService service;
    service.fillArrayDesc(*testArray);

    SelectionSortAlgorithm algorithm;
    algorithm.sortUnoptimized(*testArray);

    EXPECT_TRUE(service.verifyAlgorithmResult(*testArray));
    delete testArray;
}

TEST(SelectionSortAlgorithmTest, sortLargeStringListUnoptimized) {
    array<string, LARGE_SIZE>* testArray = new array<string, LARGE_SIZE>();

    TestSuiteService service;
    service.fillArrayDesc(*testArray);

    SelectionSortAlgorithm algorithm;
    algorithm.sortUnoptimized(*testArray);

    EXPECT_TRUE(service.verifyAlgorithmResult(*testArray));
    delete testArray;
}

TEST(SelectionSortAlgorithmTest, sortEmptyIntegerListOptimized) {
    int expectedValue = 0;
    array<int, SMALL_SIZE>* testArray = new array<int, SMALL_SIZE>();

    TestSuiteService service;
    service.fillArrayWithValue(*testArray, expectedValue);

    SelectionSortAlgorithm algorithm;
    algorithm.sortOptimized(*testArray);

    EXPECT_TRUE(service.verifyExpectedValueAlgorithmResult(expectedValue, *testArray));
    delete testArray;
}

TEST(SelectionSortAlgorithmTest, sortASCIntegerListOptimized) {
    array<int, SMALL_SIZE>* testArray = new array<int, SMALL_SIZE>();

    TestSuiteService service;
    service.fillArrayAsc(*testArray);

    SelectionSortAlgorithm algorithm;
    algorithm.sortOptimized(*testArray);

    EXPECT_TRUE(service.verifyAlgorithmResult(*testArray));
    delete testArray;
}

TEST(SelectionSortAlgorithmTest, sortDESCIntegerListOptimized) {
    array<int, SMALL_SIZE>* testArray = new array<int, SMALL_SIZE>();

    TestSuiteService service;
    service.fillArrayDesc(*testArray);

    SelectionSortAlgorithm algorithm;
    algorithm.sortOptimized(*testArray);

    EXPECT_TRUE(service.verifyAlgorithmResult(*testArray));
    delete testArray;
}

TEST(SelectionSortAlgorithmTest, sortLargeIntegerListOptimized) {
    array<int, LARGE_SIZE>* testArray = new array<int, LARGE_SIZE>();

    TestSuiteService service;
    service.fillArrayDesc(*testArray);

    SelectionSortAlgorithm algorithm;
    algorithm.sortOptimized(*testArray);

    EXPECT_TRUE(service.verifyAlgorithmResult(*testArray));
    delete testArray;
}

TEST(SelectionSortAlgorithmTest, sortEmptyListDoubleOptimized) {
    double expectedValue = 0.0;
    array<double, SMALL_SIZE>* testArray = new array<double, SMALL_SIZE>();

    TestSuiteService service;
    service.fillArrayWithValue(*testArray, expectedValue);

    SelectionSortAlgorithm algorithm;
    algorithm.sortOptimized(*testArray);

    EXPECT_TRUE(service.verifyExpectedValueAlgorithmResult(expectedValue, *testArray));
    delete testArray;
}

TEST(SelectionSortAlgorithmTest, sortASCListDoubleOptimized) {
    array<double, SMALL_SIZE>* testArray = new array<double, SMALL_SIZE>();

    TestSuiteService service;
    service.fillArrayAsc(*testArray);

    SelectionSortAlgorithm algorithm;
    algorithm.sortOptimized(*testArray);

    EXPECT_TRUE(service.verifyAlgorithmResult(*testArray));
    delete testArray;
}

TEST(SelectionSortAlgorithmTest, sortDESCListDoubleOptimized) {
    array<double, SMALL_SIZE>* testArray = new array<double, SMALL_SIZE>();

    TestSuiteService service;
    service.fillArrayAsc(*testArray);

    SelectionSortAlgorithm algorithm;
    algorithm.sortOptimized(*testArray);

    EXPECT_TRUE(service.verifyAlgorithmResult(*testArray));
    delete testArray;
}

TEST(SelectionSortAlgorithmTest, sortLargeDoubleListOptimized) {
    array<double, LARGE_SIZE>* testArray = new array<double, LARGE_SIZE>();

    TestSuiteService service;
    service.fillArrayDesc(*testArray);

    SelectionSortAlgorithm algorithm;
    algorithm.sortOptimized(*testArray);

    EXPECT_TRUE(service.verifyAlgorithmResult(*testArray));
    delete testArray;
}

TEST(SelectionSortAlgorithmTest, sortEmptyStringListOptimized) {
    string expectedValue = "";
    array<string, SMALL_SIZE>* testArray = new array<string, SMALL_SIZE>();

    TestSuiteService service;
    service.fillArrayWithValue(*testArray, expectedValue);

    SelectionSortAlgorithm algorithm;
    algorithm.sortOptimized(*testArray);

    EXPECT_TRUE(service.verifyExpectedValueAlgorithmResult(expectedValue, *testArray));
    delete testArray;
}

TEST(SelectionSortAlgorithmTest, sortASCStringListOptimized) {
    array<string, SMALL_SIZE>* testArray = new array<string, SMALL_SIZE>();

    TestSuiteService service;
    service.fillArrayAsc(*testArray);

    SelectionSortAlgorithm algorithm;
    algorithm.sortOptimized(*testArray);

    EXPECT_TRUE(service.verifyAlgorithmResult(*testArray));
    delete testArray;
}

TEST(SelectionSortAlgorithmTest, sortDESCStringListOptimized) {
    array<string, SMALL_SIZE>* testArray = new array<string, SMALL_SIZE>();

    TestSuiteService service;
    service.fillArrayDesc(*testArray);

    SelectionSortAlgorithm algorithm;
    algorithm.sortOptimized(*testArray);

    EXPECT_TRUE(service.verifyAlgorithmResult(*testArray));
    delete testArray;
}

TEST(SelectionSortAlgorithmTest, sortRandomStringListOptimized) {
    array<string, LARGE_SIZE>* testArray = new array<string, LARGE_SIZE>();

    TestSuiteService service;
    service.fillArrayDesc(*testArray);

    SelectionSortAlgorithm algorithm;
    algorithm.sortOptimized(*testArray);

    EXPECT_TRUE(service.verifyAlgorithmResult(*testArray));
    delete testArray;
}
