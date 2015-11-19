/*
 * author: Joshua Braun
 */

#include <gtest/gtest.h>

#include "../../algorithm/InsertSortAlgorithm.h"
#include "../../util/TestSuiteService.h"

#define SIZE 50

using namespace std;

TEST(InsertSortAlgorithmTest, sortEmptyListWithoutGuardian) {
    array<int, SIZE>* testArray = new array<int, SIZE>();
    array<int, SIZE> expectedArray = *testArray;

    InsertSortAlgorithm algorithm;
    algorithm.sort(*testArray);

    EXPECT_EQ(expectedArray, *testArray);
}

TEST(InsertSortAlgorithmTest, sortASCIntegerListWithoutGuardian) {
    array<int, SIZE>* testArray = new array<int, SIZE>();

    TestSuiteService service;
    service.fillArrayAsc(*testArray);

    InsertSortAlgorithm algorithm;
    algorithm.sort(*testArray);

    for(int i = 0; i < SIZE - 2; i++){
        EXPECT_LT(testArray->at(i), testArray->at(i+1));
    }
}

TEST(InsertSortAlgorithmTest, sortDESCIntegerListWithoutGuardian) {
    array<int, SIZE>* testArray = new array<int, SIZE>();

    TestSuiteService service;
    service.fillArrayDesc(*testArray);

    InsertSortAlgorithm algorithm;
    algorithm.sort(*testArray);

    for(int i = 0; i < SIZE - 2; i++){
        EXPECT_LT(testArray->at(i), testArray->at(i+1));
    }
}

TEST(InsertSortAlgorithmTest, sortRandomIntegerListWithoutGuardian) {
    array<int, SIZE>* testArray = new array<int, SIZE>();

    TestSuiteService service;
    service.fillArrayRandom(*testArray);

    InsertSortAlgorithm algorithm;
    algorithm.sort(*testArray);

    for(int i = 0; i < SIZE - 2; i++){
        EXPECT_LT(testArray->at(i), testArray->at(i+1));
    }
}

TEST(InsertSortAlgorithmTest, sortASCIDoubleListWithoutGuardian) {
    array<double, SIZE>* testArray = new array<double, SIZE>();

    TestSuiteService service;
    service.fillArrayAsc(*testArray);

    InsertSortAlgorithm algorithm;
    algorithm.sort(*testArray);

    for(int i = 0; i < SIZE - 2; i++){
        EXPECT_LT(testArray->at(i), testArray->at(i+1));
    }
}

TEST(InsertSortAlgorithmTest, sortDESCDoubleListWithoutGuardian) {
    array<double, SIZE>* testArray = new array<double, SIZE>();

    TestSuiteService service;
    service.fillArrayDesc(*testArray);

    InsertSortAlgorithm algorithm;
    algorithm.sort(*testArray);

    for(int i = 0; i < SIZE - 2; i++){
        EXPECT_LT(testArray->at(i), testArray->at(i+1));
    }
}

TEST(InsertSortAlgorithmTest, sortRandomDoubleListWithoutGuardian) {
    array<double, SIZE>* testArray = new array<double, SIZE>();

    TestSuiteService service;
    service.fillArrayRandom(*testArray);

    InsertSortAlgorithm algorithm;
    algorithm.sort(*testArray);

    for(int i = 0; i < SIZE - 2; i++){
        EXPECT_LT(testArray->at(i), testArray->at(i+1));
    }
}

TEST(InsertSortAlgorithmTest, sortASCStringListWithoutGuardian) {
    char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
    array<string, SIZE>* testArray = new array<string, SIZE>();

    for(int k = 0; k < SIZE; k++){
        testArray->at(k) += alphabet[k % 27];
    }

    InsertSortAlgorithm algorithm;
    algorithm.sort(*testArray);

    for(int i = 0; i < SIZE - 2; i++){
        EXPECT_LE(testArray->at(i), testArray->at(i+1));
    }
}

TEST(InsertSortAlgorithmTest, sortDESCStringListWithoutGuardian) {
    char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
    array<string, SIZE>* testArray = new array<string, SIZE>();

    for(int k = 0; k < SIZE; k++){
        testArray->at(k) += alphabet[k % 27 - k % 27];
    }

    InsertSortAlgorithm algorithm;
    algorithm.sort(*testArray);

    for(int i = 0; i < SIZE - 2; i++){
        EXPECT_LE(testArray->at(i), testArray->at(i+1));
    }
}

TEST(InsertSortAlgorithmTest, sortRandomStringListWithoutGuardian) {
    char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
    array<string, SIZE>* testArray = new array<string, SIZE>();

    for(int k = 0; k < SIZE; k++){
        for(int j = 0; j < rand() % 10; j++){
            testArray->at(k) += alphabet[j];
        }
    }

    InsertSortAlgorithm algorithm;
    algorithm.sort(*testArray);

    for(int i = 0; i < SIZE - 2; i++){
        EXPECT_LE(testArray->at(i), testArray->at(i+1));
    }
}

TEST(InsertSortAlgorithmTest, sortEmptyListWithGuardian) {
    array<int, SIZE>* testArray = new array<int, SIZE>();
    array<int, SIZE> expectedArray = *testArray;

    InsertSortAlgorithm algorithm;
    algorithm.sortWithGuardian(*testArray);

    EXPECT_EQ(expectedArray, *testArray);
}

TEST(InsertSortAlgorithmTest, sortASCIntegerListWithGuardian) {
    array<int, SIZE>* testArray = new array<int, SIZE>();

    TestSuiteService service;
    service.fillArrayAsc(*testArray);

    InsertSortAlgorithm algorithm;
    algorithm.sortWithGuardian(*testArray);

    for(int i = 0; i < SIZE - 2; i++){
        EXPECT_LT(testArray->at(i), testArray->at(i+1));
    }
}

TEST(InsertSortAlgorithmTest, sortDESCIntegerListWithGuardian) {
    array<int, SIZE>* testArray = new array<int, SIZE>();

    TestSuiteService service;
    service.fillArrayDesc(*testArray);

    InsertSortAlgorithm algorithm;
    algorithm.sortWithGuardian(*testArray);

    for(int i = 0; i < SIZE - 2; i++){
        EXPECT_LT(testArray->at(i), testArray->at(i+1));
    }
}

TEST(InsertSortAlgorithmTest, sortRandomIntegerListWithGuardian) {
    array<int, SIZE>* testArray = new array<int, SIZE>();

    TestSuiteService service;
    service.fillArrayRandom(*testArray);

    InsertSortAlgorithm algorithm;
    algorithm.sortWithGuardian(*testArray);

    for(int i = 0; i < SIZE - 2; i++){
        EXPECT_LT(testArray->at(i), testArray->at(i+1));
    }
}

TEST(InsertSortAlgorithmTest, sortASCListDoubleWithGuardian) {
    array<double, SIZE>* testArray = new array<double, SIZE>();

    TestSuiteService service;
    service.fillArrayAsc(*testArray);

    InsertSortAlgorithm algorithm;
    algorithm.sortWithGuardian(*testArray);

    for(int i = 0; i < SIZE - 2; i++){
        EXPECT_LT(testArray->at(i), testArray->at(i+1));
    }
}

TEST(InsertSortAlgorithmTest, sortDESCListDoubleWithGuardian) {
    array<double, SIZE>* testArray = new array<double, SIZE>();

    TestSuiteService service;
    service.fillArrayAsc(*testArray);

    InsertSortAlgorithm algorithm;
    algorithm.sortWithGuardian(*testArray);

    for(int i = 0; i < SIZE - 2; i++){
        EXPECT_LT(testArray->at(i), testArray->at(i+1));
    }
}

TEST(InsertSortAlgorithmTest, sortRandomDoubleListWithGuardian) {
    array<double, SIZE>* testArray = new array<double, SIZE>();

    TestSuiteService service;
    service.fillArrayRandom(*testArray);

    InsertSortAlgorithm algorithm;
    algorithm.sortWithGuardian(*testArray);

    for(int i = 0; i < SIZE - 2; i++){
        EXPECT_LT(testArray->at(i), testArray->at(i+1));
    }
}

TEST(InsertSortAlgorithmTest, sortASCStringListWithGuardian) {
    char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
    array<string, SIZE>* testArray = new array<string, SIZE>();

    for(int k = 0; k < SIZE; k++){
        testArray->at(k) += alphabet[k % 27];
    }

    InsertSortAlgorithm algorithm;
    algorithm.sortWithGuardian(*testArray);

    for(int i = 0; i < SIZE - 2; i++){
        EXPECT_LE(testArray->at(i), testArray->at(i+1));
    }
}

TEST(InsertSortAlgorithmTest, sortDESCStringListWithGuardian) {
    char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
    array<string, SIZE>* testArray = new array<string, SIZE>();

    for(int k = 0; k < SIZE; k++){
        testArray->at(k) += alphabet[SIZE % 27 - k % 27];
    }

    InsertSortAlgorithm algorithm;
    algorithm.sortWithGuardian(*testArray);

    for(int i = 0; i < SIZE - 2; i++){
        EXPECT_LE(testArray->at(i), testArray->at(i+1));
    }
}

TEST(InsertSortAlgorithmTest, sortRandomStringListWithGuardian) {
    char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
    array<string, SIZE>* testArray = new array<string, SIZE>();

    for(int k = 0; k < SIZE; k++){
        for(int j = 0; j < rand() % 10; j++){
            testArray->at(k) += alphabet[j];
        }
    }

    InsertSortAlgorithm algorithm;
    algorithm.sortWithGuardian(*testArray);

    for(int i = 0; i < SIZE - 2; i++){
        EXPECT_LE(testArray->at(i), testArray->at(i+1));
    }
}