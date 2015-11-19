/*
 * author: Joshua Braun
 */

#include <iostream>
#include <fstream>

#include "benchmark/BenchmarkRunner.h"

#define ELEMENTTYPE double
#define SIZE 4000

using namespace std;

int main() {
    std::ostream* stream;

    //ofstream recordFile;
    //recordFile.open ("Record.csv");

    stream = &std::cout;
    *stream << "Algorithm;Elements;Random [s]; ASC [s]; DESC [s]" << endl;

    BenchmarkRunner runner(stream);

    std::array<ELEMENTTYPE, SIZE>* small_array = new std::array<ELEMENTTYPE, SIZE>();

    runner.runSelectionSortAlgorithm(*small_array);
    runner.runInsertSortAlgorithm(*small_array);

    //recordFile.close();

    return 0;
}