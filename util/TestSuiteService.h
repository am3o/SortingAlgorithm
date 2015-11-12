//
// Created by am3o on 10.11.15.
//

#ifndef SORTINGALGORITHM_TESTSUITESERVICE_H
#define SORTINGALGORITHM_TESTSUITESERVICE_H

#include <stdlib.h>
#include <iterator>
#include <algorithm>
#include <array>

class TestSuiteService {
public:
    template<typename T, size_t SIZE>
    void fillArrayRandom(std::array<T, SIZE> *ptr);

    template<typename T, size_t SIZE>
    void fillArrayDesc(std::array<T, SIZE> *ptr);

    template<typename T, size_t SIZE>
    void fillArrayAsc(std::array<T, SIZE> *ptr);
private:
};

template<typename T, size_t SIZE>
void TestSuiteService::fillArrayAsc(std::array<T, SIZE> *ptr) {
    for(size_t i = 0; i < SIZE; i++){
        ptr->at(i) = (T) i;
    }
}

template<typename T, size_t SIZE>
void TestSuiteService::fillArrayDesc(std::array<T, SIZE> *ptr) {
    for(size_t i = 0; i < SIZE; i++){
        ptr->at(i) = SIZE - i;
    }
}

template<typename T, size_t SIZE>
void TestSuiteService::fillArrayRandom(std::array<T, SIZE> *ptr) {
    for(size_t i = 0; i < SIZE; i++){
        ptr->at(i)= (T) rand();
    }
}

#endif //SORTINGALGORITHM_TESTSUITESERVICE_H
