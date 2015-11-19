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

    template<typename T, size_t SIZE>
    bool prepareBenchmarkTest(int testcase, std::array<T, SIZE> *parameter);
public:
    BenchmarkRunner();
    virtual ~BenchmarkRunner();

    template<typename T, size_t SIZE>
    high_resolution_clock::duration run(void(*algorithm)(std::array<T, SIZE> *), std::array<T, SIZE>* parameter);

    template<typename T, size_t SIZE>
    void runSelectionSortAlgorithm(std::array<T, SIZE>* parameter);

    template<typename T, size_t SIZE>
    void runInsertSortAlgorithm(std::array<T, SIZE>* parameter);
};

BenchmarkRunner::BenchmarkRunner() {
    _service = new TestSuiteService();
}

BenchmarkRunner::~BenchmarkRunner() {
    _service->~TestSuiteService();
}

template<typename T, size_t SIZE>
bool BenchmarkRunner::prepareBenchmarkTest(int testcase, std::array<T, SIZE> *parameter) {
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

template<typename T, size_t SIZE>
high_resolution_clock::duration BenchmarkRunner::run(void(*algorithm)(std::array<T, SIZE> *), std::array<T, SIZE>* parameter) {
    this->prepareBenchmarkTest(0, parameter);
    high_resolution_clock::time_point t1 = high_resolution_clock::now();
    algorithm(parameter);
    high_resolution_clock::time_point t2 = high_resolution_clock::now();
    return duration_cast<duration<double>>(t2 - t1);
}


template<typename T, size_t SIZE>
void BenchmarkRunner::runInsertSortAlgorithm(std::array<T, SIZE> *parameter) {
    InsertSortAlgorithm sortAlgorithm;
    std::cout<< "'direktes Einfügen' Sortieren [ohne Wächterelement] ("<<SIZE<<" Elemente)"<<std::endl;
    for(int i = 0; i < 3; i++){
        this->prepareBenchmarkTest(i, parameter);
        high_resolution_clock::time_point t1 = high_resolution_clock::now();
        sortAlgorithm.sort(parameter);
        high_resolution_clock::time_point t2 = high_resolution_clock::now();
        std::cout<< i << " Testcase: " << duration_cast<duration<double>>(t2 - t1).count() << " s | ";
    }

    std::cout<<std::endl<< "'direktes Einfügen' Sortieren [mit Wächterelement] ("<<SIZE<<" Elemente)"<<std::endl;
    for(int i = 0; i < 3; i++){
        this->prepareBenchmarkTest(i, parameter);
        high_resolution_clock::time_point t1 = high_resolution_clock::now();
        sortAlgorithm.sortWithGuardian(parameter);
        high_resolution_clock::time_point t2 = high_resolution_clock::now();
        std::cout<< i << " Testcase: " << duration_cast<duration<double>>(t2 - t1).count() << " s | ";
    }
    std::cout<<std::endl;
}

template<typename T, size_t SIZE>
void BenchmarkRunner::runSelectionSortAlgorithm(std::array<T, SIZE> *parameter) {
    SelectionSortAlgorithm sortAlgorithm;
    std::cout<< "'direkte Auswahl' Sortieren [Optimiert] ("<<SIZE<<" Elemente)"<<std::endl;
    for(int i = 0; i < 3; i++){
        this->prepareBenchmarkTest(i, parameter);
        high_resolution_clock::time_point t1 = high_resolution_clock::now();
        sortAlgorithm.sortOptimized(parameter);
        high_resolution_clock::time_point t2 = high_resolution_clock::now();
        std::cout<< i << " Testcase: " << duration_cast<duration<double>>(t2 - t1).count() << " s | ";
    }

    std::cout<<std::endl<< "'direkte Auswahl' Sortieren [nicht Optimiert] ("<<SIZE<<" Elemente)"<<std::endl;
    for(int i = 0; i < 3; i++){
        this->prepareBenchmarkTest(i, parameter);
        high_resolution_clock::time_point t1 = high_resolution_clock::now();
        sortAlgorithm.sortUnoptimized(parameter);
        high_resolution_clock::time_point t2 = high_resolution_clock::now();
        std::cout<< i << " Testcase: " << duration_cast<duration<double>>(t2 - t1).count() << " s | ";
    }
    std::cout<<std::endl;
}

#endif //SORTINGALGORITHM_BENCHMARKRUNNER_H
