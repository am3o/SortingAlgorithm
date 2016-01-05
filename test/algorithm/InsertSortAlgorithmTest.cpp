/*
 * author: Joshua Braun
 */

#include <gtest/gtest.h>

#include "../../algorithm/InsertSortAlgorithm.h"
#include "../../util/TestSuiteService.h"

#define SMALL_SIZE 5
#define LARGE_SIZE 10000

using namespace std;

TEST(InsertSortAlgorithmTest, sortEmptyIntegerListWithoutGuardian) {
    int expectedValue = 0;
    array<int, SMALL_SIZE>* testArray = new array<int, SMALL_SIZE>();

    TestSuiteService service;
    service.fillArrayWithValue(*testArray, expectedValue);

    InsertSortAlgorithm algorithm;
    algorithm.sort(*testArray);

    EXPECT_TRUE(service.verifyExpectedValueAlgorithmResult(expectedValue, *testArray));
    delete testArray;
}

TEST(InsertSortAlgorithmTest, sortASCIntegerListWithoutGuardian) {
    array<int, SMALL_SIZE>* testArray = new array<int, SMALL_SIZE>();

    TestSuiteService service;
    service.fillArrayAsc(*testArray);

    InsertSortAlgorithm algorithm;
    algorithm.sort(*testArray);

    EXPECT_TRUE(service.verifyAlgorithmResult(*testArray));
    delete testArray;
}

TEST(InsertSortAlgorithmTest, sortDESCIntegerListWithoutGuardian) {
    array<int, SMALL_SIZE>* testArray = new array<int, SMALL_SIZE>();

    TestSuiteService service;
    service.fillArrayDesc(*testArray);

    InsertSortAlgorithm algorithm;
    algorithm.sort(*testArray);

    EXPECT_TRUE(service.verifyAlgorithmResult(*testArray));
    delete testArray;
}

TEST(InsertSortAlgorithmTest, sortLargeIntegerListWithoutGuardian) {
    array<int, LARGE_SIZE>* testArray = new array<int, LARGE_SIZE>();

    TestSuiteService service;
    service.fillArrayDesc(*testArray);

    InsertSortAlgorithm algorithm;
    algorithm.sort(*testArray);

    EXPECT_TRUE(service.verifyAlgorithmResult(*testArray));
    delete testArray;
}

TEST(InsertSortAlgorithmTest, sortEmptyDoubleListWithoutGuardian) {
    double expectedValue = 0.0;
    array<double, SMALL_SIZE>* testArray = new array<double, SMALL_SIZE>();

    TestSuiteService service;
    service.fillArrayWithValue(*testArray, expectedValue);

    InsertSortAlgorithm algorithm;
    algorithm.sort(*testArray);

    EXPECT_TRUE(service.verifyExpectedValueAlgorithmResult(expectedValue, *testArray));
    delete testArray;
}

TEST(InsertSortAlgorithmTest, sortASCIDoubleListWithoutGuardian) {
    array<double, SMALL_SIZE>* testArray = new array<double, SMALL_SIZE>();

    TestSuiteService service;
    service.fillArrayAsc(*testArray);

    InsertSortAlgorithm algorithm;
    algorithm.sort(*testArray);

    EXPECT_TRUE(service.verifyAlgorithmResult(*testArray));
    delete testArray;
}

TEST(InsertSortAlgorithmTest, sortDESCDoubleListWithoutGuardian) {
    array<double, SMALL_SIZE>* testArray = new array<double, SMALL_SIZE>();

    TestSuiteService service;
    service.fillArrayDesc(*testArray);

    InsertSortAlgorithm algorithm;
    algorithm.sort(*testArray);

    EXPECT_TRUE(service.verifyAlgorithmResult(*testArray));
    delete testArray;
}

TEST(InsertSortAlgorithmTest, sortLargeDoubleListWithoutGuardian) {
    array<double, LARGE_SIZE>* testArray = new array<double, LARGE_SIZE>();

    TestSuiteService service;
    service.fillArrayDesc(*testArray);

    InsertSortAlgorithm algorithm;
    algorithm.sort(*testArray);

    EXPECT_TRUE(service.verifyAlgorithmResult(*testArray));
    delete testArray;
}

TEST(InsertSortAlgorithmTest, sortEmptyStringListWithoutGuardian) {
    string expectedValue = "";
    array<string, SMALL_SIZE>* testArray = new array<string, SMALL_SIZE>();

    TestSuiteService service;
    service.fillArrayWithValue(*testArray, expectedValue);

    InsertSortAlgorithm algorithm;
    algorithm.sort(*testArray);

    EXPECT_TRUE(service.verifyExpectedValueAlgorithmResult(expectedValue, *testArray));
    delete testArray;
}

TEST(InsertSortAlgorithmTest, sortASCStringListWithoutGuardian) {
    array<string, SMALL_SIZE>* testArray = new array<string, SMALL_SIZE>();

    TestSuiteService service;
    service.fillArrayAsc(*testArray);

    InsertSortAlgorithm algorithm;
    algorithm.sort(*testArray);

    EXPECT_TRUE(service.verifyAlgorithmResult(*testArray));
    delete testArray;
}

TEST(InsertSortAlgorithmTest, sortDESCStringListWithoutGuardian) {
    array<string, SMALL_SIZE>* testArray = new array<string, SMALL_SIZE>();

    TestSuiteService service;
    service.fillArrayDesc(*testArray);

    InsertSortAlgorithm algorithm;
    algorithm.sort(*testArray);

    EXPECT_TRUE(service.verifyAlgorithmResult(*testArray));
    delete testArray;
}

TEST(InsertSortAlgorithmTest, sortLargeStringListWithoutGuardian) {
    array<string, LARGE_SIZE>* testArray = new array<string, LARGE_SIZE>();

    TestSuiteService service;
    service.fillArrayDesc(*testArray);

    InsertSortAlgorithm algorithm;
    algorithm.sort(*testArray);

    EXPECT_TRUE(service.verifyAlgorithmResult(*testArray));
    delete testArray;
}

TEST(InsertSortAlgorithmTest, sortEmptyIntegerListWithGuardian) {
    int expectedValue = 0;
    array<int, SMALL_SIZE>* testArray = new array<int, SMALL_SIZE>();

    TestSuiteService service;
    service.fillArrayWithValue(*testArray, expectedValue);

    InsertSortAlgorithm algorithm;
    algorithm.sortWithGuardian(*testArray);

    EXPECT_TRUE(service.verifyExpectedValueAlgorithmResult(expectedValue, *testArray));
    delete testArray;
}

TEST(InsertSortAlgorithmTest, sortASCIntegerListWithGuardian) {
    array<int, SMALL_SIZE>* testArray = new array<int, SMALL_SIZE>();

    TestSuiteService service;
    service.fillArrayAsc(*testArray);

    InsertSortAlgorithm algorithm;
    algorithm.sortWithGuardian(*testArray);

    EXPECT_TRUE(service.verifyAlgorithmResult(*testArray));
    delete testArray;
}

TEST(InsertSortAlgorithmTest, sortDESCIntegerListWithGuardian) {
    array<int, SMALL_SIZE>* testArray = new array<int, SMALL_SIZE>();

    TestSuiteService service;
    service.fillArrayDesc(*testArray);

    InsertSortAlgorithm algorithm;
    algorithm.sortWithGuardian(*testArray);

    EXPECT_TRUE(service.verifyAlgorithmResult(*testArray));
    delete testArray;
}

TEST(InsertSortAlgorithmTest, sortLargeIntegerListWithGuardian) {
    array<int, LARGE_SIZE>* testArray = new array<int, LARGE_SIZE>();

    TestSuiteService service;
    service.fillArrayDesc(*testArray);

    InsertSortAlgorithm algorithm;
    algorithm.sortWithGuardian(*testArray);

    EXPECT_TRUE(service.verifyAlgorithmResult(*testArray));
    delete testArray;
}

TEST(InsertSortAlgorithmTest, sortEmptyListDoubleWithGuardian) {
    double expectedValue = 0.0;
    array<double, SMALL_SIZE>* testArray = new array<double, SMALL_SIZE>();

    TestSuiteService service;
    service.fillArrayWithValue(*testArray, expectedValue);

    InsertSortAlgorithm algorithm;
    algorithm.sortWithGuardian(*testArray);

    EXPECT_TRUE(service.verifyExpectedValueAlgorithmResult(expectedValue, *testArray));
    delete testArray;
}

TEST(InsertSortAlgorithmTest, sortASCListDoubleWithGuardian) {
    array<double, SMALL_SIZE>* testArray = new array<double, SMALL_SIZE>();

    TestSuiteService service;
    service.fillArrayAsc(*testArray);

    InsertSortAlgorithm algorithm;
    algorithm.sortWithGuardian(*testArray);

    EXPECT_TRUE(service.verifyAlgorithmResult(*testArray));
    delete testArray;
}

TEST(InsertSortAlgorithmTest, sortDESCListDoubleWithGuardian) {
    array<double, SMALL_SIZE>* testArray = new array<double, SMALL_SIZE>();

    TestSuiteService service;
    service.fillArrayAsc(*testArray);

    InsertSortAlgorithm algorithm;
    algorithm.sortWithGuardian(*testArray);

    EXPECT_TRUE(service.verifyAlgorithmResult(*testArray));
    delete testArray;
}

TEST(InsertSortAlgorithmTest, sortLargeDoubleListWithGuardian) {
    array<double, LARGE_SIZE>* testArray = new array<double, LARGE_SIZE>();

    TestSuiteService service;
    service.fillArrayDesc(*testArray);

    InsertSortAlgorithm algorithm;
    algorithm.sortWithGuardian(*testArray);

    EXPECT_TRUE(service.verifyAlgorithmResult(*testArray));
    delete testArray;
}

TEST(InsertSortAlgorithmTest, sortEmptyStringListWithGuardian) {
    string expectedValue = "";
    array<string, SMALL_SIZE>* testArray = new array<string, SMALL_SIZE>();

    TestSuiteService service;
    service.fillArrayWithValue(*testArray, expectedValue);

    InsertSortAlgorithm algorithm;
    algorithm.sortWithGuardian(*testArray);

    EXPECT_TRUE(service.verifyExpectedValueAlgorithmResult(expectedValue, *testArray));
    delete testArray;
}

TEST(InsertSortAlgorithmTest, sortASCStringListWithGuardian) {
    array<string, SMALL_SIZE>* testArray = new array<string, SMALL_SIZE>();

    TestSuiteService service;
    service.fillArrayAsc(*testArray);

    InsertSortAlgorithm algorithm;
    algorithm.sortWithGuardian(*testArray);

    EXPECT_TRUE(service.verifyAlgorithmResult(*testArray));
    delete testArray;
}

TEST(InsertSortAlgorithmTest, sortDESCStringListWithGuardian) {
    array<string, SMALL_SIZE>* testArray = new array<string, SMALL_SIZE>();

    TestSuiteService service;
    service.fillArrayDesc(*testArray);

    InsertSortAlgorithm algorithm;
    algorithm.sortWithGuardian(*testArray);

    EXPECT_TRUE(service.verifyAlgorithmResult(*testArray));
    delete testArray;
}

TEST(InsertSortAlgorithmTest, sortLargeStringListWithGuardian) {
    array<string, LARGE_SIZE>* testArray = new array<string, LARGE_SIZE>();

    TestSuiteService service;
    service.fillArrayDesc(*testArray);

    InsertSortAlgorithm algorithm;
    algorithm.sortWithGuardian(*testArray);

    EXPECT_TRUE(service.verifyAlgorithmResult(*testArray));
    delete testArray;
}