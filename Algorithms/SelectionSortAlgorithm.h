//
// Created by am3o on 10.11.15.
//

#ifndef SORTINGALGORITHM_SELECTIONSORTALGORITHM_H
#define SORTINGALGORITHM_SELECTIONSORTALGORITHM_H


#include "SortingAlgorithmBase.h"

#include <iostream>

class SelectionSortAlgorithm : SortingAlgorithmBase{
public:
    SelectionSortAlgorithm();
    SelectionSortAlgorithm(const SelectionSortAlgorithm& orig);
    virtual ~SelectionSortAlgorithm();

    template <typename T, size_t SIZE>
    void sortUnoptimized(std::array<T, SIZE> *ptr);

    template <typename T, size_t SIZE>
    void sortOptimized(std::array<T, SIZE> *ptr);
};
/*
SelectionSortAlgorithm::SelectionSortAlgorithm(){}

SelectionSortAlgorithm::SelectionSortAlgorithm(const SelectionSortAlgorithm& orig){}

SelectionSortAlgorithm::~SelectionSortAlgorithm(){}
*/
template <typename T, size_t SIZE>
void SelectionSortAlgorithm::sortUnoptimized(std::array<T,SIZE> *ptr) {
    for(size_t i = 0; i < SIZE-1; i++){
        T* currentMinValue = &ptr->at(i);
        T* tempMinValue = this->findMinimumUnoptimized(ptr, i+1);
        if(*currentMinValue > *tempMinValue){
            currentMinValue = tempMinValue;
        }
        std::swap(ptr->at(i), *currentMinValue);
    }
}

template <typename T, size_t SIZE>
void SelectionSortAlgorithm::sortOptimized(std::array<T,SIZE> *ptr) {
    for(size_t i = 0; i < SIZE-1; i++){
        T* currentMinValue = &ptr->at(i);
        T* tempMinValue = this->findMinimumOptimized(ptr, i+1);
        if(*currentMinValue > *tempMinValue){
            currentMinValue = tempMinValue;
        }
        std::swap(ptr->at(i), *currentMinValue);
    }
}

#endif //SORTINGALGORITHM_SELECTIONSORTALGORITHM_H
