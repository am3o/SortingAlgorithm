/*
 * author: Joshua Braun
 */

#ifndef SORTINGALGORITHM_SELECTIONSORTALGORITHM_H
#define SORTINGALGORITHM_SELECTIONSORTALGORITHM_H


#include "SortingAlgorithmBase.h"

#include <iostream>

class SelectionSortAlgorithm : public SortingAlgorithmBase{
public:
    template <typename T, size_t SIZE>
    void sortUnoptimized(std::array<T, SIZE>& elements);

    template <typename T, size_t SIZE>
    void sortOptimized(std::array<T, SIZE>& elements);
};

template <typename T, size_t SIZE>
void SelectionSortAlgorithm::sortUnoptimized(std::array<T,SIZE>& elements) {
    for(size_t i = 0; i < SIZE-1; i++){
        T* tempMinValue = this->findMinimumUnoptimized(elements, i);
        std::swap(elements[i], *tempMinValue);
    }
}

template <typename T, size_t SIZE>
void SelectionSortAlgorithm::sortOptimized(std::array<T,SIZE>& elements) {
    for(size_t i = 0; i < SIZE-1; i++){
        T* tempMinValue = this->findMinimumOptimized(elements, i);
        std::swap(elements[i], *tempMinValue);
    }
}

#endif //SORTINGALGORITHM_SELECTIONSORTALGORITHM_H
