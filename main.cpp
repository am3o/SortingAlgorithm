/*
 * author: Joshua Braun
 */

#include <iostream>

#include "benchmark/BenchmarkRunner.h"

#define ELEMENTTYPE double
#define SIZE 8000

int main() {
    std::array<ELEMENTTYPE, SIZE>* i_array = new std::array<ELEMENTTYPE, SIZE>();

    BenchmarkRunner runner;
    runner.runSelectionSortAlgorithm(i_array);
    runner.runInsertSortAlgorithm(i_array);


    return 0;
}