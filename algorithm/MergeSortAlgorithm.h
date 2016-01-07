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
    void merge(std::array<T, SIZE> &a, std::array<T, SIZE> &aux,  size_t lo, size_t hi, bool asc);

    template <typename T, size_t SIZE>
    void merge(std::array<T, SIZE> &a, std::array<T, SIZE> &aux,  size_t lo, size_t mid, size_t hi);

    template <typename  T, size_t SIZE>
    bool mergeruns(std::array<T, SIZE>& elements, std::array<T, SIZE>& aux);

public:
    template <typename T, size_t SIZE>
    void sortBottomUp(std::array<T, SIZE>& elements);

    template  <typename T, size_t SIZE>
    void sortNatural(std::array<T, SIZE>& elements);
};

template <typename T, size_t SIZE>
void MergeSortAlgorithm::sortBottomUp(std::array<T, SIZE> &elements) {
    std::array<T, SIZE>* aux = new std::array<T, SIZE>();
    for(long unsigned sz = 1; sz < SIZE ; sz = sz + sz){
        for(long unsigned lo = 0; lo < SIZE - sz; lo += sz + sz){
            this->merge(elements, *aux, lo, lo+sz-1, std::min(lo+sz+sz-1, SIZE-1));
        }
    }
    delete aux;
}

template  <typename T, size_t SIZE>
void MergeSortAlgorithm::sortNatural(std::array<T, SIZE> &elements) {
    std::array<T, SIZE>* aux = new std::array<T, SIZE>();
    while(!mergeruns(elements, *aux) & !mergeruns(*aux, elements));
    delete aux;
}

template <typename T, size_t SIZE>
bool MergeSortAlgorithm::mergeruns(std::array<T, SIZE> &elements, std::array<T, SIZE>& aux) {
    size_t i = 0, k = 0;
    T x;
    bool asc = true;

    while (i < SIZE) {
        k=i;
        do x=elements[i++]; while (i<SIZE && x<=elements[i]);
        while (i < SIZE && x >= elements[i]) x=elements[i++];
        merge (elements, aux, k, i-1, asc);
        asc=!asc;
    }
    return k==0;
}

template <typename T, size_t SIZE>
void MergeSortAlgorithm::merge(std::array<T, SIZE> &a, std::array<T, SIZE> &aux,  size_t lo, size_t hi, bool asc) {
    int k=asc? lo: hi;
    int c=asc? 1: -1;
    int i=lo, j=hi;

    while (i<=j) {
        if (a[i]<=a[j])
            aux[k]=a[i++];
        else
            aux[k]=a[j--];
        k+=c;
    }
}

template <typename T, size_t SIZE>
void MergeSortAlgorithm::merge(std::array<T, SIZE> &a, std::array<T, SIZE> &aux,  size_t lo, size_t mid, size_t hi) {
    size_t i = lo, j = mid + 1;

    for(size_t k = lo ;k <= hi; k++ )
        aux[k] = a[k];

    for(size_t k = lo; k <= hi; k++){
        if      (i > mid)   a[k] = aux[j++];
        else if (j > hi)    a[k] = aux[i++];
        else if (aux[j] < aux[i]) a[k] = aux[j++];
        else a[k] = aux[i++];
    }
}



#endif //SORTINGALGORITHM_MERGESORTALGORITHM_H
