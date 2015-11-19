/*
 * author: Joshua Braun
 */

#ifndef SORTINGALGORITHM_SORTINGALGORITHMBASE_H
#define SORTINGALGORITHM_SORTINGALGORITHMBASE_H

#include <stdlib.h>
#include <iterator>
#include <algorithm>
#include <array>

class SortingAlgorithmBase {
protected:
    template<typename T, size_t SIZE>
    T* findMinimumOptimized (std::array<T, SIZE> *ptr);

    template<typename T, size_t SIZE>
    T* findMinimumOptimized (std::array<T, SIZE> *ptr, size_t startIndex);

    template<typename T, size_t SIZE>
    T* findMinimumUnoptimized (std::array<T, SIZE> *ptr);

    template<typename T, size_t SIZE>
    T* findMinimumUnoptimized (std::array<T, SIZE> *ptr, size_t startIndex);
};

template<typename T, size_t SIZE>
T* SortingAlgorithmBase::findMinimumOptimized(std::array<T, SIZE>* ptr) {
    return this->findMinimumOptimized(ptr, 0);
}

template<typename T, size_t SIZE>
T* SortingAlgorithmBase::findMinimumOptimized(std::array<T, SIZE>* ptr, size_t startIndex) {
    T* minValue = &ptr->at(startIndex);
    for(size_t i = startIndex; i < SIZE; i++){
        if(*minValue > ptr->at(i))
            minValue = &ptr->at(i);
    }
    return minValue;
}

template<typename T, size_t SIZE>
T* SortingAlgorithmBase::findMinimumUnoptimized(std::array<T, SIZE>* ptr) {
    return this->findMinimumUnoptimized(ptr, 0);
}

template<typename T, size_t SIZE>
T* SortingAlgorithmBase::findMinimumUnoptimized(std::array<T, SIZE>* ptr, size_t startIndex) {
    T* minValue = &ptr->at(startIndex);
    for(size_t i = SIZE-1; i >= startIndex; i--){
        if(*minValue > ptr->at(i))
            minValue = &ptr->at(i);
    }
    return minValue;
}

#endif //SORTINGALGORITHM_SORTINGALGORITHMBASE_H
