//
// Created by am3o on 10.11.15.
//

#ifndef SORTINGALGORITHM_TESTSUITESERVICE_H
#define SORTINGALGORITHM_TESTSUITESERVICE_H

#include <stdlib.h>
#include <iterator>
#include <algorithm>
#include <array>

using namespace std;

class TestSuiteService {
private:
    //char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
public:
    template<typename T, size_t SIZE>
    void fillArrayWithValue(array<T, SIZE>& elements, T value);

    template<typename T, size_t SIZE>
    void fillArrayRandom(array<T, SIZE>& elements);

    template<size_t SIZE>
    void fillArrayRandom(array<string, SIZE>& elements);

    template<typename T, size_t SIZE>
    void fillArrayDesc(array<T, SIZE>& elements);

    template<size_t SIZE>
    void fillArrayDesc(array<string, SIZE>& elements);

    template<typename T, size_t SIZE>
    void fillArrayAsc(array<T, SIZE>& elements);

    template<size_t SIZE>
    void fillArrayAsc(array<string, SIZE>& elements);

    template <typename T, size_t SIZE>
    bool verifyAlgorithmResult (array<T, SIZE>& elements);

    template<size_t SIZE>
    bool verifyAlgorithmResult(array<string, SIZE>& elements);

    template <typename T, size_t SIZE>
    bool verifyExpectedValueAlgorithmResult (T expectedValue, array<T, SIZE>& elements);
};

template<typename T, size_t SIZE>
void TestSuiteService::fillArrayWithValue(array<T, SIZE> &elements, T value) {
   for(size_t i = 0; i < SIZE; i++){
       elements[i] = value;
   }
}

template<typename T, size_t SIZE>
void TestSuiteService::fillArrayAsc(array<T, SIZE>& elements) {
    for(size_t i = 0; i < SIZE; i++){
        elements[i] = (T) i;
    }
}

template<size_t SIZE>
void TestSuiteService::fillArrayAsc(array<string, SIZE> &elements) {
    char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
    for(size_t i = 0; i < SIZE; i++){
        elements[i] = alphabet[i%26];
    }
}

template<typename T, size_t SIZE>
void TestSuiteService::fillArrayDesc(array<T, SIZE>& elements) {
    for(size_t i = 0; i < SIZE; i++){
        elements[i] = (T) SIZE - i - 1;
    }
}

template<size_t SIZE>
void TestSuiteService::fillArrayDesc(array<string, SIZE> &elements) {
    char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
    for(size_t i = 0; i < SIZE; i++){
        elements[i] = alphabet[SIZE%26-i%26];
    }
}

template<typename T, size_t SIZE>
void TestSuiteService::fillArrayRandom(array<T, SIZE>& elements) {
    for(size_t i = 0; i < SIZE; i++){
        elements[i] = (T) rand();
    }
}

template<typename T, size_t SIZE>
bool TestSuiteService::verifyAlgorithmResult(array<T, SIZE>& elements) {
    for(size_t i = 0; i < SIZE; i++){
        if(elements[i] != i)
            return false;
    }
    return true;
}

template<size_t SIZE>
bool TestSuiteService::verifyAlgorithmResult(array<string, SIZE> &elements) {
    char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
    for(size_t i = 0; i < SIZE - 1; i++){
        if(SIZE < 26 && strcmp(elements[i].c_str(), &alphabet[i]) == 0)
            return false;
    }
    return true;
}

template<typename T, size_t SIZE>
bool TestSuiteService::verifyExpectedValueAlgorithmResult(T expectedValue, array<T, SIZE> &elements) {
    for(size_t i = 0; i < SIZE; i++){
        if(elements[i] != expectedValue)
            return false;
    }
    return true;
}

#endif //SORTINGALGORITHM_TESTSUITESERVICE_H
