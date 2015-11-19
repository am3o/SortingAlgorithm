/*
 * author: Joshua Braun
 */

#include <gtest/gtest.h>
#include "../../algorithm/SelectionSortAlgorithm.h"
#include "../../util/TestSuiteService.h"

#define SIZE 1024

using namespace std;

TEST(SelectionSortAlgorithmTest, sortEmptyListUnoptimized) {
    array<int, SIZE>* testArray = new array<int, SIZE>();
    array<int, SIZE> expectedArray = *testArray;

    SelectionSortAlgorithm algorithm;
    algorithm.sortUnoptimized(testArray);

    EXPECT_EQ(expectedArray, *testArray);
}

TEST(SelectionSortAlgorithmTest, sortASCIntegerListUnoptimized) {
    array<int, SIZE>* testArray = new array<int, SIZE>();

    TestSuiteService service;
    service.fillArrayAsc(testArray);

    SelectionSortAlgorithm algorithm;
    algorithm.sortUnoptimized(testArray);

    for(int i = 0; i < SIZE - 2; i++){
        EXPECT_LT(testArray->at(i), testArray->at(i+1));
    }
}

TEST(SelectionSortAlgorithmTest, sortDESCIntegerListUnoptimized) {
    array<int, SIZE>* testArray = new array<int, SIZE>();

    TestSuiteService service;
    service.fillArrayDesc(testArray);

    SelectionSortAlgorithm algorithm;
    algorithm.sortUnoptimized(testArray);

    for(int i = 0; i < SIZE - 2; i++){
        EXPECT_LT(testArray->at(i), testArray->at(i+1));
    }
}

TEST(SelectionSortAlgorithmTest, sortRandomIntegerListUnoptimized) {
    array<int, SIZE>* testArray = new array<int, SIZE>();

    TestSuiteService service;
    service.fillArrayRandom(testArray);

    SelectionSortAlgorithm algorithm;
    algorithm.sortUnoptimized(testArray);

    for(int i = 0; i < SIZE - 2; i++){
        EXPECT_LT(testArray->at(i), testArray->at(i+1));
    }
}

TEST(SelectionSortAlgorithmTest, sortASCDoubleListUnoptimized) {
    array<double, SIZE>* testArray = new array<double, SIZE>();

    TestSuiteService service;
    service.fillArrayAsc(testArray);

    SelectionSortAlgorithm algorithm;
    algorithm.sortUnoptimized(testArray);

    for(int i = 0; i < SIZE - 2; i++){
        EXPECT_LT(testArray->at(i), testArray->at(i+1));
    }
}

TEST(SelectionSortAlgorithmTest, sortDESCDoubleListUnoptimized) {
    array<double, SIZE>* testArray = new array<double, SIZE>();

    TestSuiteService service;
    service.fillArrayDesc(testArray);

    SelectionSortAlgorithm algorithm;
    algorithm.sortUnoptimized(testArray);

    for(int i = 0; i < SIZE - 2; i++){
        EXPECT_LT(testArray->at(i), testArray->at(i+1));
    }
}

TEST(SelectionSortAlgorithmTest, sortRandomDoubleListUnoptimized) {
    array<double, SIZE>* testArray = new array<double, SIZE>();

    TestSuiteService service;
    service.fillArrayRandom(testArray);

    SelectionSortAlgorithm algorithm;
    algorithm.sortUnoptimized(testArray);

    for(int i = 0; i < SIZE - 2; i++){
        EXPECT_LT(testArray->at(i), testArray->at(i+1));
    }
}

TEST(SelectionSortAlgorithmTest, sortASCStringListUnoptimized) {
    char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
    array<string, SIZE>* testArray = new array<string, SIZE>();

    for(int k = 0; k < SIZE; k++){
        testArray->at(k) += alphabet[k % 27];
    }

    SelectionSortAlgorithm algorithm;
    algorithm.sortUnoptimized(testArray);

    for(int i = 0; i < SIZE - 2; i++){
        EXPECT_LE(testArray->at(i), testArray->at(i+1));
    }
}

TEST(SelectionSortAlgorithmTest, sortDESCStringListUnoptimized) {
    char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
    array<string, SIZE>* testArray = new array<string, SIZE>();

    for(int k = 0; k < SIZE; k++){
        testArray->at(k) += alphabet[SIZE % 27 - k % 27];
    }

    SelectionSortAlgorithm algorithm;
    algorithm.sortUnoptimized(testArray);

    for(int i = 0; i < SIZE - 2; i++){
        EXPECT_LE(testArray->at(i), testArray->at(i+1));
    }
}

TEST(SelectionSortAlgorithmTest, sortRandomStringListUnoptimized) {
    char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
    array<string, SIZE>* testArray = new array<string, SIZE>();

    for(int k = 0; k < SIZE; k++){
        for(int j = 0; j < rand() % 10; j++){
            testArray->at(k) += alphabet[j];
        }
    }

    SelectionSortAlgorithm algorithm;
    algorithm.sortUnoptimized(testArray);

    for(int i = 0; i < SIZE - 2; i++){
        EXPECT_LE(testArray->at(i), testArray->at(i+1));
    }
}

TEST(SelectionSortAlgorithmTest, sortEmptyListOptimized) {
    array<int, SIZE>* testArray = new array<int, SIZE>();
    array<int, SIZE> expectedArray = *testArray;

    SelectionSortAlgorithm algorithm;
    algorithm.sortOptimized(testArray);

    EXPECT_EQ(expectedArray, *testArray);
}

TEST(SelectionSortAlgorithmTest, sortASCIntegerListOptimized) {
    array<int, SIZE>* testArray = new array<int, SIZE>();

    TestSuiteService service;
    service.fillArrayAsc(testArray);

    SelectionSortAlgorithm algorithm;
    algorithm.sortOptimized(testArray);

    for(int i = 0; i < SIZE - 2; i++){
        EXPECT_LT(testArray->at(i), testArray->at(i+1));
    }
}

TEST(SelectionSortAlgorithmTest, sortDESCIntegerListOptimized) {
    array<int, SIZE>* testArray = new array<int, SIZE>();

    TestSuiteService service;
    service.fillArrayDesc(testArray);

    SelectionSortAlgorithm algorithm;
    algorithm.sortOptimized(testArray);

    for(int i = 0; i < SIZE - 2; i++){
        EXPECT_LT(testArray->at(i), testArray->at(i+1));
    }
}

TEST(SelectionSortAlgorithmTest, sortRandomIntegerListOptimized) {
    array<int, SIZE>* testArray = new array<int, SIZE>();

    TestSuiteService service;
    service.fillArrayRandom(testArray);

    SelectionSortAlgorithm algorithm;
    algorithm.sortOptimized(testArray);

    for(int i = 0; i < SIZE - 2; i++){
        EXPECT_LT(testArray->at(i), testArray->at(i+1));
    }
}

TEST(SelectionSortAlgorithmTest, sortASCDoubleListOptimized) {
    array<double, SIZE>* testArray = new array<double, SIZE>();

    TestSuiteService service;
    service.fillArrayAsc(testArray);

    SelectionSortAlgorithm algorithm;
    algorithm.sortOptimized(testArray);

    for(int i = 0; i < SIZE - 2; i++){
        EXPECT_LT(testArray->at(i), testArray->at(i+1));
    }
}

TEST(SelectionSortAlgorithmTest, sortDESCDoubleListOptimized) {
    array<double, SIZE>* testArray = new array<double, SIZE>();

    TestSuiteService service;
    service.fillArrayAsc(testArray);

    SelectionSortAlgorithm algorithm;
    algorithm.sortOptimized(testArray);

    for(int i = 0; i < SIZE - 2; i++){
        EXPECT_LT(testArray->at(i), testArray->at(i+1));
    }
}

TEST(SelectionSortAlgorithmTest, sortRandomDoubleListOptimized) {
    array<double, SIZE>* testArray = new array<double, SIZE>();

    TestSuiteService service;
    service.fillArrayRandom(testArray);

    SelectionSortAlgorithm algorithm;
    algorithm.sortOptimized(testArray);

    for(int i = 0; i < SIZE - 2; i++){
        EXPECT_LT(testArray->at(i), testArray->at(i+1));
    }
}

TEST(SelectionSortAlgorithmTest, sortASCStringListOptimized) {
    char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
    array<string, SIZE>* testArray = new array<string, SIZE>();

    for(int k = 0; k < SIZE; k++){
        testArray->at(k) += alphabet[k % 27];
    }

    SelectionSortAlgorithm algorithm;
    algorithm.sortOptimized(testArray);

    for(int i = 0; i < SIZE - 2; i++){
        EXPECT_LE(testArray->at(i), testArray->at(i+1));
    }
}

TEST(SelectionSortAlgorithmTest, sortDESCStringListOptimized) {
    char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
    array<string, SIZE>* testArray = new array<string, SIZE>();

    for(int k = 0; k < SIZE; k++){
        testArray->at(k) += alphabet[SIZE % 27 - k % 27];
    }

    SelectionSortAlgorithm algorithm;
    algorithm.sortOptimized(testArray);

    for(int i = 0; i < SIZE - 2; i++){
        EXPECT_LE(testArray->at(i), testArray->at(i+1));
    }
}

TEST(SelectionSortAlgorithmTest, sortRandomStringListOptimized) {
    char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
    array<string, SIZE>* testArray = new array<string, SIZE>();

    for(int k = 0; k < SIZE; k++){
        for(int j = 0; j < rand() % 10; j++){
            testArray->at(k) += alphabet[j];
        }
    }

    SelectionSortAlgorithm algorithm;
    algorithm.sortOptimized(testArray);

    for(int i = 0; i < SIZE - 2; i++){
        EXPECT_LE(testArray->at(i), testArray->at(i+1));
    }
}
