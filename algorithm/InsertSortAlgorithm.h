//
// Created by am3o on 10.11.15.
//

#ifndef SORTINGALGORITHM_INSERTSORTALGORITHM_H
#define SORTINGALGORITHM_INSERTSORTALGORITHM_H


#include "SortingAlgorithmBase.h"


class InsertSortAlgorithm : public SortingAlgorithmBase {
public:
    template <typename T, size_t SIZE>
    void sort(std::array<T, SIZE>* ptr);

    template <typename T, size_t SIZE>
    void sortWithGuardian(std::array<T, SIZE>* ptr);
};

template<typename T, size_t SIZE>
void InsertSortAlgorithm::sort(std::array<T, SIZE>* ptr) {
    for(size_t i = 1; i < SIZE; i++) {
        T tempValue = ptr->at(i);
        for(size_t j = i; j > 0 && tempValue < ptr->at(j-1); j--) {
            ptr->at(j) = ptr->at(j-1);
            ptr->at(j-1) = tempValue;
        }
    }
}

template<typename T, size_t SIZE>
void InsertSortAlgorithm::sortWithGuardian(std::array<T, SIZE>* ptr) {
    T* guard = this->findMinimumOptimized(ptr);
    std::swap(ptr->at(0), *guard);
    for(size_t i = 1; i < SIZE; i++) {
        T tempValue = ptr->at(i);
        for(size_t j = i; tempValue < ptr->at(j-1); j--) {
            ptr->at(j) = ptr->at(j-1);
            ptr->at(j-1) = tempValue;
        }
    }
}

#endif //SORTINGALGORITHM_INSERTSORTALGORITHM_H
