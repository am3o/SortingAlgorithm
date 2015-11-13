#include <iostream>
#include <chrono>

#include "util/TestSuiteService.h"
#include "algorithm/InsertSortAlgorithm.h"
#include "algorithm/SelectionSortAlgorithm.h"
#include "benchmark/BenchmarkRunner.h"

#define ELEMENTTYPE double
#define SIZE 64000

using namespace std::chrono;

int main() {
    std::array<ELEMENTTYPE, SIZE>* i_array = new std::array<ELEMENTTYPE, SIZE>();

    BenchmarkRunner runner;
    runner.runSelectionSortAlgorithm(i_array);
    runner.runInsertSortAlgorithm(i_array);


    return 0;
}