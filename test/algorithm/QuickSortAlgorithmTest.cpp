//
// Created by am3o on 17.12.15.
//

#include <gtest/gtest.h>

#include "../../algorithm/QuickSortAlgorithm.h"
#include "../../util/TestSuiteService.h"

#define SMALL_SIZE 5
#define LARGE_SIZE 10000

using namespace std;

TEST(QuicksortAlgorithmTest, sortEmptyList3WayPartioning) {
    array<int, SMALL_SIZE>* testArray = new array<int, SMALL_SIZE>();
    array<int, SMALL_SIZE> expectedArray = *testArray;

    EXPECT_EQ(expectedArray, *testArray);
}

TEST(QuicksortAlgorithmTest, sortEmptyIntegerList3WayPartioning) {
    int expectedValue = 0;
    array<int, SMALL_SIZE>* testArray = new array<int, SMALL_SIZE>();

    TestSuiteService service;
    service.fillArrayWithValue(*testArray, expectedValue);

    QuickSortAlgorithm algorithm;
    algorithm.sort(*testArray);

    EXPECT_TRUE(service.verifyExpectedValueAlgorithmResult(expectedValue, *testArray));
    delete testArray;
}

TEST(QuicksortAlgorithmTest, sortASCIntegerList3WayPartioning) {
    array<int, SMALL_SIZE>* testArray = new array<int, SMALL_SIZE>();

    TestSuiteService service;
    service.fillArrayAsc(*testArray);

    QuickSortAlgorithm algorithm;
    algorithm.sort(*testArray);

    EXPECT_TRUE(service.verifyAlgorithmResult(*testArray));
    delete testArray;
}

TEST(QuicksortAlgorithmTest, sortDESCIntegerList3WayPartioning) {
    array<int, SMALL_SIZE>* testArray = new array<int, SMALL_SIZE>();

    TestSuiteService service;
    service.fillArrayDesc(*testArray);

    QuickSortAlgorithm algorithm;
    algorithm.sort(*testArray);

    EXPECT_TRUE(service.verifyAlgorithmResult(*testArray));
    delete testArray;
}

TEST(QuicksortAlgorithmTest, sortLargeIntegerList3WayPartioning) {
    array<int, LARGE_SIZE>* testArray = new array<int, LARGE_SIZE>();

    TestSuiteService service;
    service.fillArrayDesc(*testArray);

    QuickSortAlgorithm algorithm;
    algorithm.sort(*testArray);

    EXPECT_TRUE(service.verifyAlgorithmResult(*testArray));
    delete testArray;
}

TEST(QuicksortAlgorithmTest, sortEmptyDoubleList3WayPartioning) {
    double expectedValue = 0.0;
    array<double, SMALL_SIZE>* testArray = new array<double, SMALL_SIZE>();

    TestSuiteService service;
    service.fillArrayWithValue(*testArray, expectedValue);

    QuickSortAlgorithm algorithm;
    algorithm.sort(*testArray);

    EXPECT_TRUE(service.verifyExpectedValueAlgorithmResult(expectedValue, *testArray));
    delete testArray;
}

TEST(QuicksortAlgorithmTest, sortASCIDoubleList3WayPartioning) {
    array<double, SMALL_SIZE>* testArray = new array<double, SMALL_SIZE>();

    TestSuiteService service;
    service.fillArrayAsc(*testArray);

    QuickSortAlgorithm algorithm;
    algorithm.sort(*testArray);

    EXPECT_TRUE(service.verifyAlgorithmResult(*testArray));
    delete testArray;
}

TEST(QuicksortAlgorithmTest, sortDESCDoubleList3WayPartioning) {
    array<double, SMALL_SIZE>* testArray = new array<double, SMALL_SIZE>();

    TestSuiteService service;
    service.fillArrayDesc(*testArray);

    QuickSortAlgorithm algorithm;
    algorithm.sort(*testArray);

    EXPECT_TRUE(service.verifyAlgorithmResult(*testArray));
    delete testArray;
}

TEST(QuicksortAlgorithmTest, sortLargeDoubleList3WayPartioning) {
    array<double, LARGE_SIZE>* testArray = new array<double, LARGE_SIZE>();

    TestSuiteService service;
    service.fillArrayDesc(*testArray);

    QuickSortAlgorithm algorithm;
    algorithm.sort(*testArray);

    EXPECT_TRUE(service.verifyAlgorithmResult(*testArray));
    delete testArray;
}

TEST(QuicksortAlgorithmTest, sortEmptyStringList3WayPartioning) {
    string expectedValue = "";
    array<string, SMALL_SIZE>* testArray = new array<string, SMALL_SIZE>();

    TestSuiteService service;
    service.fillArrayWithValue(*testArray, expectedValue);

    QuickSortAlgorithm algorithm;
    algorithm.sort(*testArray);

    EXPECT_TRUE(service.verifyExpectedValueAlgorithmResult(expectedValue, *testArray));
    delete testArray;
}

TEST(QuicksortAlgorithmTest, sortASCStringList3WayPartioning) {
    array<string, SMALL_SIZE>* testArray = new array<string, SMALL_SIZE>();

    TestSuiteService service;
    service.fillArrayAsc(*testArray);

    QuickSortAlgorithm algorithm;
    algorithm.sort(*testArray);

    EXPECT_TRUE(service.verifyAlgorithmResult(*testArray));
    delete testArray;
}

TEST(QuicksortAlgorithmTest, sortDESCStringList3WayPartioning) {
    array<string, SMALL_SIZE>* testArray = new array<string, SMALL_SIZE>();

    TestSuiteService service;
    service.fillArrayDesc(*testArray);

    QuickSortAlgorithm algorithm;
    algorithm.sort(*testArray);

    EXPECT_TRUE(service.verifyAlgorithmResult(*testArray));
    delete testArray;
}

TEST(QuicksortAlgorithmTest, sortLargeStringList3WayPartioning) {
    array<string, LARGE_SIZE>* testArray = new array<string, LARGE_SIZE>();

    TestSuiteService service;
    service.fillArrayDesc(*testArray);

    QuickSortAlgorithm algorithm;
    algorithm.sort(*testArray);

    EXPECT_TRUE(service.verifyAlgorithmResult(*testArray));
    delete testArray;
}

TEST(QuicksortAlgorithmTest, sortEmptyIntegerListHybrid) {
    int expectedValue = 0;
    array<int, SMALL_SIZE>* testArray = new array<int, SMALL_SIZE>();

    TestSuiteService service;
    service.fillArrayWithValue(*testArray, expectedValue);

    QuickSortAlgorithm algorithm;
    algorithm.sortHybrid(*testArray);

    EXPECT_TRUE(service.verifyExpectedValueAlgorithmResult(expectedValue, *testArray));
    delete testArray;
}

TEST(QuicksortAlgorithmTest, sortASCIntegerListHybrid) {
    array<int, SMALL_SIZE>* testArray = new array<int, SMALL_SIZE>();

    TestSuiteService service;
    service.fillArrayAsc(*testArray);

    QuickSortAlgorithm algorithm;
    algorithm.sortHybrid(*testArray);

    EXPECT_TRUE(service.verifyAlgorithmResult(*testArray));
    delete testArray;
}

TEST(QuicksortAlgorithmTest, sortDESCIntegerListHybrid) {
    array<int, SMALL_SIZE>* testArray = new array<int, SMALL_SIZE>();

    TestSuiteService service;
    service.fillArrayDesc(*testArray);

    QuickSortAlgorithm algorithm;
    algorithm.sortHybrid(*testArray);

    EXPECT_TRUE(service.verifyAlgorithmResult(*testArray));
    delete testArray;
}

TEST(QuicksortAlgorithmTest, sortLargeIntegerListHybrid) {
    array<int, LARGE_SIZE>* testArray = new array<int, LARGE_SIZE>();

    TestSuiteService service;
    service.fillArrayDesc(*testArray);

    QuickSortAlgorithm algorithm;
    algorithm.sortHybrid(*testArray);

    EXPECT_TRUE(service.verifyAlgorithmResult(*testArray));
    delete testArray;
}

TEST(QuicksortAlgorithmTest, sortEmptyListDoubleHybrid) {
    double expectedValue = 0.0;
    array<double, SMALL_SIZE>* testArray = new array<double, SMALL_SIZE>();

    TestSuiteService service;
    service.fillArrayWithValue(*testArray, expectedValue);

    QuickSortAlgorithm algorithm;
    algorithm.sortHybrid(*testArray);

    EXPECT_TRUE(service.verifyExpectedValueAlgorithmResult(expectedValue, *testArray));
    delete testArray;
}

TEST(QuicksortAlgorithmTest, sortASCListDoubleHybrid) {
    array<double, SMALL_SIZE>* testArray = new array<double, SMALL_SIZE>();

    TestSuiteService service;
    service.fillArrayAsc(*testArray);

    QuickSortAlgorithm algorithm;
    algorithm.sortHybrid(*testArray);

    EXPECT_TRUE(service.verifyAlgorithmResult(*testArray));
    delete testArray;
}

TEST(QuicksortAlgorithmTest, sortDESCListDoubleHybrid) {
    array<double, SMALL_SIZE>* testArray = new array<double, SMALL_SIZE>();

    TestSuiteService service;
    service.fillArrayAsc(*testArray);

    QuickSortAlgorithm algorithm;
    algorithm.sortHybrid(*testArray);

    EXPECT_TRUE(service.verifyAlgorithmResult(*testArray));
    delete testArray;
}

TEST(QuicksortAlgorithmTest, sortLargeDoubleListHybrid) {
    array<double, LARGE_SIZE>* testArray = new array<double, LARGE_SIZE>();

    TestSuiteService service;
    service.fillArrayDesc(*testArray);

    QuickSortAlgorithm algorithm;
    algorithm.sortHybrid(*testArray);

    EXPECT_TRUE(service.verifyAlgorithmResult(*testArray));
    delete testArray;
}

TEST(QuicksortAlgorithmTest, sortEmptyStringListHybrid) {
    string expectedValue = "";
    array<string, SMALL_SIZE>* testArray = new array<string, SMALL_SIZE>();

    TestSuiteService service;
    service.fillArrayWithValue(*testArray, expectedValue);

    QuickSortAlgorithm algorithm;
    algorithm.sortHybrid(*testArray);

    EXPECT_TRUE(service.verifyExpectedValueAlgorithmResult(expectedValue, *testArray));
    delete testArray;
}

TEST(QuicksortAlgorithmTest, sortASCStringListHybrid) {
    array<string, SMALL_SIZE>* testArray = new array<string, SMALL_SIZE>();

    TestSuiteService service;
    service.fillArrayAsc(*testArray);

    QuickSortAlgorithm algorithm;
    algorithm.sortHybrid(*testArray);

    EXPECT_TRUE(service.verifyAlgorithmResult(*testArray));
    delete testArray;
}

TEST(QuicksortAlgorithmTest, sortDESCStringListHybrid) {
    array<string, SMALL_SIZE>* testArray = new array<string, SMALL_SIZE>();

    TestSuiteService service;
    service.fillArrayDesc(*testArray);

    QuickSortAlgorithm algorithm;
    algorithm.sortHybrid(*testArray);

    EXPECT_TRUE(service.verifyAlgorithmResult(*testArray));
    delete testArray;
}

TEST(QuicksortAlgorithmTest, sortLargeStringListHybrid) {
    array<string, LARGE_SIZE>* testArray = new array<string, LARGE_SIZE>();

    TestSuiteService service;
    service.fillArrayDesc(*testArray);

    QuickSortAlgorithm algorithm;
    algorithm.sortHybrid(*testArray);

    EXPECT_TRUE(service.verifyAlgorithmResult(*testArray));
    delete testArray;
}