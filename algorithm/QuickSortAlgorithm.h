//
// Created by am3o on 25.11.15.
//

#ifndef SORTINGALGORITHM_QUICKSORTALGORITHM_H
#define SORTINGALGORITHM_QUICKSORTALGORITHM_H

#include "SortingAlgorithmBase.h"
#include "MergeSortAlgorithm.h"

class QuicksortAlgorithm : public SortingAlgorithmBase {
private:
    template <typename T, size_t SIZE>
    void internalSort(std::array<T, SIZE>& elements, size_t lo, size_t hi);
public:
    template <typename T, size_t SIZE>
    void sort(std::array<T, SIZE>& elements, size_t lo, size_t hi);

    template <typename T, size_t SIZE>
    void sort(std::array<T, SIZE>& elements);
};

template <typename T, size_t SIZE>
void QuicksortAlgorithm::internalSort(std::array<T, SIZE> &elements, size_t lo, size_t hi) {
    size_t i = lo - 1, j = hi;
    size_t p = lo, q = hi-1;

    std::swap(elements[(lo + hi) / 2], elements[hi]);
    T pivot = elements[hi];

    if(hi <= lo) return;
    while(true) {
        while(elements[++i] < pivot);
        while(pivot < elements[--j]) { if(j==lo) break; }
        if(i >= j) break;
        std::swap(elements[i], elements[j]);

        if(elements[i] == pivot) { std::swap(elements[p], elements[i]); p++;}
        if(pivot == elements[j]) { std::swap(elements[j], elements[q]); q--;}
    }

    std::swap(elements[i], elements[hi]);
    i == 0 ? j = 0 : j = i-1;
    i=i+1;

    size_t k = lo;
    while(k < p) { std::swap(elements[k], elements[j]); k++; if(j>0) j--; }
    k = hi-1;
    while(k > q){ std::swap(elements[i], elements[k]); i++; if(k>0) k--; }

    internalSort(elements, lo, j);
    internalSort(elements, i, hi);
}

template <typename T, size_t SIZE>
void QuicksortAlgorithm::sort(std::array<T, SIZE> &elements) {
    return this->internalSort(elements, 0, SIZE-1);
}


#endif //SORTINGALGORITHM_QUICKSORTALGORITHM_H
