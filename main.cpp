#include <iostream>
#include <chrono>

#include "tests/TestSuiteService.h"
#include "algorithms/InsertSortAlgorithm.h"
#include "algorithms/SelectionSortAlgorithm.h"

#define ELEMENTTYPE int
#define SIZE 64000

using namespace std;
using namespace std::chrono;

// int argc, char** argv

int main() {
    TestSuiteService service;
    SelectionSortAlgorithm sortAlgo;
    //InsertSortAlgorithm sortAlgorithm;

    std::array<ELEMENTTYPE, SIZE>* i_array = new array<ELEMENTTYPE, SIZE>();

    service.fillArrayDesc(i_array);

    high_resolution_clock::time_point t1 = high_resolution_clock::now();
    sortAlgo.sortOptimized(i_array);
    //sortAlgorithm.sortWithGuardian(i_array);
    high_resolution_clock::time_point t2 = high_resolution_clock::now();

    /*
    for(int j = 0; j < SIZE; j++){
        cout << i_array->at(j) << "|";
    }
    cout << endl;
    */

    duration<double> time_span = duration_cast<duration<double>>(t2 - t1);

    std::cout << "It took me " << time_span.count() << " seconds.";
    std::cout << std::endl;
    return 0;
}