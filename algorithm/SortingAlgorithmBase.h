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
    T* findMinimumOptimized (std::array<T, SIZE>& elements);

    template<typename T, size_t SIZE>
    T* findMinimumOptimized (std::array<T, SIZE>& elements, size_t startIndex);

    template<typename T, size_t SIZE>
    T* findMinimumOptimized (std::array<T, SIZE>& elements, size_t startIndex, size_t endIndex);

    template<typename T, size_t SIZE>
    T* findMinimumUnoptimized (std::array<T, SIZE>& elements);

    template<typename T, size_t SIZE>
    T* findMinimumUnoptimized (std::array<T, SIZE>& elements, size_t startIndex);
};

template<typename T, size_t SIZE>
T* SortingAlgorithmBase::findMinimumOptimized(std::array<T, SIZE>& elements) {
    return this->findMinimumOptimized(elements, 0);
}

template<typename T, size_t SIZE>
T* SortingAlgorithmBase::findMinimumOptimized(std::array<T, SIZE>& elements, size_t startIndex) {
    T* minValue = &elements[startIndex];
    for(size_t i = startIndex; i < SIZE; i++){
        if(*minValue > elements[i]){
            minValue = &elements[i];
        }
    }
    return minValue;
}

template<typename T, size_t SIZE>
T* SortingAlgorithmBase::findMinimumOptimized(std::array<T, SIZE>& elements, size_t startIndex, size_t endIndex) {
    T* minValue = &elements[startIndex];
    for(size_t i = startIndex; i <= endIndex; i++){
        if(*minValue > elements[i]){
            minValue = &elements[i];
        }
    }
    return minValue;
}

template<typename T, size_t SIZE>
T* SortingAlgorithmBase::findMinimumUnoptimized(std::array<T, SIZE>& elements) {
    return this->findMinimumUnoptimized(elements, 0);
}

template<typename T, size_t SIZE>
T* SortingAlgorithmBase::findMinimumUnoptimized(std::array<T, SIZE>& elements, size_t startIndex) {
    T* minValue = &elements[startIndex];
    for(size_t i = SIZE-1 ; i > startIndex; i--){
        if(*minValue > elements[i]){
            minValue = &elements[i];
        }
    }
    return minValue;
}

#endif //SORTINGALGORITHM_SORTINGALGORITHMBASE_H
