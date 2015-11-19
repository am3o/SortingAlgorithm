/*
 * author: Joshua Braun
 */

#ifndef SORTINGALGORITHM_BENCHMARKRUNNER_H
#define SORTINGALGORITHM_BENCHMARKRUNNER_H

#include <chrono>
#include <iostream>
#include <array>
#include "../util/TestSuiteService.h"
#include "../algorithm/InsertSortAlgorithm.h"
#include "../algorithm/SelectionSortAlgorithm.h"

#define CACHESIZE 64000

using namespace std::chrono;

class BenchmarkRunner{
private:
    TestSuiteService* _service;
    std::ostream*_oStream;

    template<typename T, size_t SIZE>
    bool prepareBenchmarkTest(int testcase, std::array<T, SIZE>& parameter);
public:
    BenchmarkRunner();
    BenchmarkRunner( std::ostream* ostream);

    virtual ~BenchmarkRunner();

    template<typename T, size_t SIZE>
    high_resolution_clock::duration run(void(*algorithm)(std::array<T, SIZE> *), std::array<T, SIZE>* parameter);

    template<typename T, size_t SIZE>
    void runSelectionSortAlgorithm(std::array<T, SIZE>& parameter);

    template<typename T, size_t SIZE>
    void runInsertSortAlgorithm(std::array<T, SIZE>& parameter);
};

BenchmarkRunner::BenchmarkRunner() {
    _service = new TestSuiteService();
    _oStream = &std::cout;
}

BenchmarkRunner::BenchmarkRunner( std::ostream* ostream) {
    _service = new TestSuiteService();
    _oStream = ostream;
}

BenchmarkRunner::~BenchmarkRunner() {
    _service->~TestSuiteService();
}

template<typename T, size_t SIZE>
bool BenchmarkRunner::prepareBenchmarkTest(int testcase, std::array<T, SIZE>& parameter) {
    switch (testcase){
        case 0:
            _service->fillArrayRandom(parameter);
            break;
        case 1:
            _service->fillArrayAsc(parameter);
            break;
        case 2:
            _service->fillArrayDesc(parameter);
            break;
        default:
            _service->fillArrayRandom(parameter);
            break;
    }

    std::array<int, CACHESIZE>* i_array = new std::array<int, CACHESIZE>();
    for(int i = 0; i < CACHESIZE; i++){
        i_array->at(i) = 1;
    }
    delete i_array;
    return true;
}
/**
template<typename T, size_t SIZE>
high_resolution_clock::duration BenchmarkRunner::run(void(*algorithm)(std::array<T, SIZE> *), std::array<T, SIZE>* parameter) {
    this->prepareBenchmarkTest(0, parameter);
    high_resolution_clock::time_point t1 = high_resolution_clock::now();
    algorithm(parameter);
    high_resolution_clock::time_point t2 = high_resolution_clock::now();
    return duration_cast<duration<double>>(t2 - t1);
}
*/


template<typename T, size_t SIZE>
void BenchmarkRunner::runInsertSortAlgorithm(std::array<T, SIZE>& parameter) {
    InsertSortAlgorithm sortAlgorithm;
    *_oStream << "InsertSort - Without Guardian; " << SIZE << "; ";
    for(int i = 0; i < 3; i++){
        this->prepareBenchmarkTest(i, parameter);
        high_resolution_clock::time_point t1 = high_resolution_clock::now();
        sortAlgorithm.sort(parameter);
        high_resolution_clock::time_point t2 = high_resolution_clock::now();
        *_oStream << duration_cast<duration<double>>(t2 - t1).count() << "; ";
    }
    *_oStream << std::endl;

    *_oStream << "InsertSort - With Guardian; " << SIZE << "; ";
    for(int i = 0; i < 3; i++){
        this->prepareBenchmarkTest(i, parameter);
        high_resolution_clock::time_point t1 = high_resolution_clock::now();
        sortAlgorithm.sortWithGuardian(parameter);
        high_resolution_clock::time_point t2 = high_resolution_clock::now();
        *_oStream << duration_cast<duration<double>>(t2 - t1).count() << "; ";
    }
    *_oStream << std::endl;
}

template<typename T, size_t SIZE>
void BenchmarkRunner::runSelectionSortAlgorithm(std::array<T, SIZE>& parameter) {
    SelectionSortAlgorithm sortAlgorithm;

    *_oStream << "SelectionSort - Unoptimized; " << SIZE << " ; ";
    for(int i = 0; i < 3; i++){
        this->prepareBenchmarkTest(i, parameter);
        high_resolution_clock::time_point t1 = high_resolution_clock::now();
        sortAlgorithm.sortUnoptimized(parameter);
        high_resolution_clock::time_point t2 = high_resolution_clock::now();
        *_oStream << duration_cast<duration<double>>(t2 - t1).count() << "; ";
    }
    *_oStream << std::endl;

    *_oStream << "SelectionSort - Optimized; " << SIZE << " ; ";
    for(int k = 0; k < 3; k++){
        this->prepareBenchmarkTest(k, parameter);
        high_resolution_clock::time_point t1 = high_resolution_clock::now();
        sortAlgorithm.sortOptimized(parameter);
        high_resolution_clock::time_point t2 = high_resolution_clock::now();
        *_oStream << duration_cast<duration<double>>(t2 - t1).count() << "; ";
    }
    *_oStream << std::endl;
}

#endif //SORTINGALGORITHM_BENCHMARKRUNNER_H
