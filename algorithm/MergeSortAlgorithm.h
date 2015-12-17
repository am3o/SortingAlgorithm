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
    void merge(std::array<T, SIZE> &a, std::array<T, SIZE> &aux,  int lo, int hi, bool asc);

    template <typename  T, size_t SIZE>
    bool mergeruns(std::array<T, SIZE>& elements, std::array<T, SIZE>& aux);

public:
    template <typename T, size_t SIZE>
    void sortBottomUp(std::array<T, SIZE>& elements);

    template  <typename T, size_t SIZE>
    void sortNatural(std::array<T, SIZE>& elements);
};

template <typename T, size_t SIZE>
void MergeSortAlgorithm::merge(std::array<T, SIZE> &a, std::array<T, SIZE> &aux,  int lo, int hi, bool asc) {
    int i = lo, mid = lo + (hi - lo)/2, j = mid + 1;

    for(int k = lo ;k <= hi; k++ )
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
            merge(elements, *aux, lo, std::min(lo+sz+sz-1, SIZE-1), true);
        }
    }
    delete aux;
}

template  <typename T, size_t SIZE>
void MergeSortAlgorithm::sortNatural(std::array<T, SIZE> &elements) {
    std::array<T, SIZE>* aux = new std::array<T, SIZE>();
    while(!mergeruns(elements, *aux) && !mergeruns(*aux, elements));
}

template <typename T, size_t SIZE>
bool MergeSortAlgorithm::mergeruns(std::array<T, SIZE> &elements, std::array<T, SIZE>& aux) {
    size_t k = 0;
    T value;
    bool asc = true;
    for(size_t i = 0; i < SIZE; k = i){
        do value = elements[i++]; while (i < SIZE && value <= elements[i]);
        while(i < SIZE && value >= elements[i]) value = elements[i++];
        merge(elements, aux, k, std::min(i-1, SIZE-1), asc);
        asc =! asc;
    }
    return k == 0;
}



#endif //SORTINGALGORITHM_MERGESORTALGORITHM_H
