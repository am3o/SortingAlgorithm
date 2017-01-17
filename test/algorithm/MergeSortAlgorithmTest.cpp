//
// Created by am3o on 17.12.15.
//

#include <gtest/gtest.h>

#include "../../algorithm/MergeSortAlgorithm.h"
#include "../../util/TestSuiteService.h"

#define SMALL_SIZE 5
#define LARGE_SIZE 10000

using namespace std;

TEST(MergeSortAlgorithmTest, sortEmptyIntegerListBottomUp) {
    int expectedValue = 0;
    array<int, SMALL_SIZE>* testArray = new array<int, SMALL_SIZE>();

    TestSuiteService service;
    service.fillArrayWithValue(*testArray, expectedValue);

    MergeSortAlgorithm algorithm;
    algorithm.sortBottomUp(*testArray);

    EXPECT_TRUE(service.verifyExpectedValueAlgorithmResult(expectedValue, *testArray));
    delete testArray;
}

TEST(MergeSortAlgorithmTest, sortASCIntegerListBottomUp) {
    array<int, SMALL_SIZE>* testArray = new array<int, SMALL_SIZE>();

    TestSuiteService service;
    service.fillArrayAsc(*testArray);

    MergeSortAlgorithm algorithm;
    algorithm.sortBottomUp(*testArray);

    EXPECT_TRUE(service.verifyAlgorithmResult(*testArray));
    delete testArray;
}

TEST(MergeSortAlgorithmTest, sortDESCIntegerListBottomUp) {
    array<int, SMALL_SIZE>* testArray = new array<int, SMALL_SIZE>();

    TestSuiteService service;
    service.fillArrayDesc(*testArray);

    MergeSortAlgorithm algorithm;
    algorithm.sortBottomUp(*testArray);

    EXPECT_TRUE(service.verifyAlgorithmResult(*testArray));
    delete testArray;
}

TEST(MergeSortAlgorithmTest, sortLargeIntegerListBottomUp) {
    array<int, LARGE_SIZE>* testArray = new array<int, LARGE_SIZE>();

    TestSuiteService service;
    service.fillArrayDesc(*testArray);

    MergeSortAlgorithm algorithm;
    algorithm.sortBottomUp(*testArray);

    EXPECT_TRUE(service.verifyAlgorithmResult(*testArray));
    delete testArray;
}

TEST(MergeSortAlgorithmTest, sortEmptyDoubleListBottomUp) {
    double expectedValue = 0.0;
    array<double, SMALL_SIZE>* testArray = new array<double, SMALL_SIZE>();

    TestSuiteService service;
    service.fillArrayWithValue(*testArray, expectedValue);

    MergeSortAlgorithm algorithm;
    algorithm.sortBottomUp(*testArray);

    EXPECT_TRUE(service.verifyExpectedValueAlgorithmResult(expectedValue, *testArray));
    delete testArray;
}

TEST(MergeSortAlgorithmTest, sortASCIDoubleListBottomUp) {
    array<double, SMALL_SIZE>* testArray = new array<double, SMALL_SIZE>();

    TestSuiteService service;
    service.fillArrayAsc(*testArray);

    MergeSortAlgorithm algorithm;
    algorithm.sortBottomUp(*testArray);

    EXPECT_TRUE(service.verifyAlgorithmResult(*testArray));
    delete testArray;
}

TEST(MergeSortAlgorithmTest, sortDESCDoubleListBottomUp) {
    array<double, SMALL_SIZE>* testArray = new array<double, SMALL_SIZE>();

    TestSuiteService service;
    service.fillArrayDesc(*testArray);

    MergeSortAlgorithm algorithm;
    algorithm.sortBottomUp(*testArray);

    EXPECT_TRUE(service.verifyAlgorithmResult(*testArray));
    delete testArray;
}

TEST(MergeSortAlgorithmTest, sortLargeDoubleListBottomUp) {
    array<double, LARGE_SIZE>* testArray = new array<double, LARGE_SIZE>();

    TestSuiteService service;
    service.fillArrayDesc(*testArray);

    MergeSortAlgorithm algorithm;
    algorithm.sortBottomUp(*testArray);

    EXPECT_TRUE(service.verifyAlgorithmResult(*testArray));
    delete testArray;
}

TEST(MergeSortAlgorithmTest, sortEmptyStringListBottomUp) {
    string expectedValue = "";
    array<string, SMALL_SIZE>* testArray = new array<string, SMALL_SIZE>();

    TestSuiteService service;
    service.fillArrayWithValue(*testArray, expectedValue);

    MergeSortAlgorithm algorithm;
    algorithm.sortBottomUp(*testArray);

    EXPECT_TRUE(service.verifyExpectedValueAlgorithmResult(expectedValue, *testArray));
    delete testArray;
}

TEST(MergeSortAlgorithmTest, sortASCStringListBottomUp) {
    array<string, SMALL_SIZE>* testArray = new array<string, SMALL_SIZE>();

    TestSuiteService service;
    service.fillArrayAsc(*testArray);

    MergeSortAlgorithm algorithm;
    algorithm.sortBottomUp(*testArray);

    EXPECT_TRUE(service.verifyAlgorithmResult(*testArray));
    delete testArray;
}

TEST(MergeSortAlgorithmTest, sortDESCStringListBottomUp) {
    array<string, SMALL_SIZE>* testArray = new array<string, SMALL_SIZE>();

    TestSuiteService service;
    service.fillArrayDesc(*testArray);

    MergeSortAlgorithm algorithm;
    algorithm.sortBottomUp(*testArray);

    EXPECT_TRUE(service.verifyAlgorithmResult(*testArray));
    delete testArray;
}

TEST(MergeSortAlgorithmTest, sortLargeStringListBottomUp) {
    array<string, LARGE_SIZE>* testArray = new array<string, LARGE_SIZE>();

    TestSuiteService service;
    service.fillArrayDesc(*testArray);

    MergeSortAlgorithm algorithm;
    algorithm.sortBottomUp(*testArray);

    EXPECT_TRUE(service.verifyAlgorithmResult(*testArray));
    delete testArray;
}

TEST(MergeSortAlgorithmTest, sortEmptyIntegerListNatural) {
    int expectedValue = 0;
    array<int, SMALL_SIZE>* testArray = new array<int, SMALL_SIZE>();

    TestSuiteService service;
    service.fillArrayWithValue(*testArray, expectedValue);

    MergeSortAlgorithm algorithm;
    algorithm.sortNatural(*testArray);

    EXPECT_TRUE(service.verifyExpectedValueAlgorithmResult(expectedValue, *testArray));
    delete testArray;
}

TEST(MergeSortAlgorithmTest, sortASCIntegerListNatural) {
    array<int, SMALL_SIZE>* testArray = new array<int, SMALL_SIZE>();

    TestSuiteService service;
    service.fillArrayAsc(*testArray);

    MergeSortAlgorithm algorithm;
    algorithm.sortNatural(*testArray);

    EXPECT_TRUE(service.verifyAlgorithmResult(*testArray));
    delete testArray;
}

TEST(MergeSortAlgorithmTest, sortDESCIntegerListNatural) {
    array<int, SMALL_SIZE>* testArray = new array<int, SMALL_SIZE>();

    TestSuiteService service;
    service.fillArrayDesc(*testArray);

    MergeSortAlgorithm algorithm;
    algorithm.sortNatural(*testArray);

    EXPECT_TRUE(service.verifyAlgorithmResult(*testArray));
    delete testArray;
}

TEST(MergeSortAlgorithmTest, sortLargeIntegerListNatural) {
    array<int, LARGE_SIZE>* testArray = new array<int, LARGE_SIZE>();

    TestSuiteService service;
    service.fillArrayDesc(*testArray);

    MergeSortAlgorithm algorithm;
    algorithm.sortNatural(*testArray);

    EXPECT_TRUE(service.verifyAlgorithmResult(*testArray));
    delete testArray;
}

TEST(MergeSortAlgorithmTest, sortEmptyListDoubleNatural) {
    double expectedValue = 0.0;
    array<double, SMALL_SIZE>* testArray = new array<double, SMALL_SIZE>();

    TestSuiteService service;
    service.fillArrayWithValue(*testArray, expectedValue);

    MergeSortAlgorithm algorithm;
    algorithm.sortNatural(*testArray);

    EXPECT_TRUE(service.verifyExpectedValueAlgorithmResult(expectedValue, *testArray));
    delete testArray;
}

TEST(MergeSortAlgorithmTest, sortASCListDoubleNatural) {
    array<double, SMALL_SIZE>* testArray = new array<double, SMALL_SIZE>();

    TestSuiteService service;
    service.fillArrayAsc(*testArray);

    MergeSortAlgorithm algorithm;
    algorithm.sortNatural(*testArray);

    EXPECT_TRUE(service.verifyAlgorithmResult(*testArray));
    delete testArray;
}

TEST(MergeSortAlgorithmTest, sortDESCListDoubleNatural) {
    array<double, SMALL_SIZE>* testArray = new array<double, SMALL_SIZE>();

    TestSuiteService service;
    service.fillArrayAsc(*testArray);

    MergeSortAlgorithm algorithm;
    algorithm.sortNatural(*testArray);

    EXPECT_TRUE(service.verifyAlgorithmResult(*testArray));
    delete testArray;
}

TEST(MergeSortAlgorithmTest, sortLargeDoubleListNatural) {
    array<double, LARGE_SIZE>* testArray = new array<double, LARGE_SIZE>();

    TestSuiteService service;
    service.fillArrayDesc(*testArray);

    MergeSortAlgorithm algorithm;
    algorithm.sortNatural(*testArray);

    EXPECT_TRUE(service.verifyAlgorithmResult(*testArray));
    delete testArray;
}

TEST(MergeSortAlgorithmTest, sortEmptyStringListNatural) {
    string expectedValue = "";
    array<string, SMALL_SIZE>* testArray = new array<string, SMALL_SIZE>();

    TestSuiteService service;
    service.fillArrayWithValue(*testArray, expectedValue);

    MergeSortAlgorithm algorithm;
    algorithm.sortNatural(*testArray);

    EXPECT_TRUE(service.verifyExpectedValueAlgorithmResult(expectedValue, *testArray));
    delete testArray;
}

TEST(MergeSortAlgorithmTest, sortASCStringListNatural) {
    array<string, SMALL_SIZE>* testArray = new array<string, SMALL_SIZE>();

    TestSuiteService service;
    service.fillArrayAsc(*testArray);

    MergeSortAlgorithm algorithm;
    algorithm.sortNatural(*testArray);

    EXPECT_TRUE(service.verifyAlgorithmResult(*testArray));
    delete testArray;
}

TEST(MergeSortAlgorithmTest, sortDESCStringListNatural) {
    array<string, SMALL_SIZE>* testArray = new array<string, SMALL_SIZE>();

    TestSuiteService service;
    service.fillArrayDesc(*testArray);

    MergeSortAlgorithm algorithm;
    algorithm.sortNatural(*testArray);

    EXPECT_TRUE(service.verifyAlgorithmResult(*testArray));
    delete testArray;
}

TEST(MergeSortAlgorithmTest, sortLargeStringListNatural) {
    array<string, LARGE_SIZE>* testArray = new array<string, LARGE_SIZE>();

    TestSuiteService service;
    service.fillArrayDesc(*testArray);

    MergeSortAlgorithm algorithm;
    algorithm.sortNatural(*testArray);

    EXPECT_TRUE(service.verifyAlgorithmResult(*testArray));
    delete testArray;
}

