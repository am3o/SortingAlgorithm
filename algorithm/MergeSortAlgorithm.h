//
// Created by am3o on 25.11.15.
//

#include <functional>
#include "SortingAlgorithmBase.h"

#ifndef SORTINGALGORITHM_MERGESORTALGORITHM_H
#define SORTINGALGORITHM_MERGESORTALGORITHM_H

class MergeSortAlgorithm : public SortingAlgorithmBase {
private:
    template <typename T, size_t SIZE>
    void merge(std::array<T, SIZE> &a, std::array<T, SIZE> &aux,  int lo, int mid, int hi);

public:
    template <typename T, size_t SIZE>
    void sortBottomUp(std::array<T, SIZE>& elements);
};

template <typename T, size_t SIZE>
void MergeSortAlgorithm::merge(std::array<T, SIZE> &a, std::array<T, SIZE> &aux,  int lo, int mid, int hi) {
    int i = lo, j = mid + 1;

    for(int k = lo; k <= hi; k++)
        aux[k] = a[k];

    for(int k = lo; k <= hi; k++){
        if      (i > mid)   a[k] = aux[j++];
        else if (j > hi)    a[k] = aux[i++];
        else if (aux[j] < aux[i]) a[k] = aux[j++];
        else a[k] = aux[i++];
    }
}

template <typename T, size_t SIZE>
void MergeSortAlgorithm::sortBottomUp(std::array<T, SIZE> &elements) {
    std::array<T, SIZE>* aux = new std::array<T, SIZE>();

    for(long unsigned sz = 1; sz < SIZE ; sz = sz + sz){
        for(long unsigned lo = 0; lo < SIZE - sz; lo += sz + sz){
            merge(elements, *aux, lo, lo+sz-1, std::min(lo+sz+sz-1, SIZE-1));
        }
    }

    delete aux;
}

#endif //SORTINGALGORITHM_MERGESORTALGORITHM_H
