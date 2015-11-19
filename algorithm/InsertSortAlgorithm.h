/*
 * author: Joshua Braun
 */

#ifndef SORTINGALGORITHM_INSERTSORTALGORITHM_H
#define SORTINGALGORITHM_INSERTSORTALGORITHM_H


#include "SortingAlgorithmBase.h"


class InsertSortAlgorithm : public SortingAlgorithmBase {
public:
    template <typename T, size_t SIZE>
    void sort(std::array<T, SIZE>& elements);

    template <typename T, size_t SIZE>
    void sortWithGuardian(std::array<T, SIZE>& elements);
};

template<typename T, size_t SIZE>
void InsertSortAlgorithm::sort(std::array<T, SIZE>& elements) {
    for(size_t i = 1; i < SIZE; i++) {
        T tempValue = elements[i];
        for(size_t j = i; j > 0 && tempValue < elements[j-1]; j--) {
            elements[j] = elements[j-1];
            elements[j-1] = tempValue;
        }
    }
}

template<typename T, size_t SIZE>
void InsertSortAlgorithm::sortWithGuardian(std::array<T, SIZE>& elements) {
    T* guardian = this->findMinimumOptimized(elements);
    std::swap(elements[0], *guardian);
    for(size_t i = 1; i < SIZE; i++) {
        T tempValue = elements[i];
        for(size_t j = i; tempValue < elements[j-1]; j--) {
            elements[j] = elements[j-1];
            elements[j-1] = tempValue;
        }
    }
}

#endif //SORTINGALGORITHM_INSERTSORTALGORITHM_H
