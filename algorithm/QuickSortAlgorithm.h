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
    int partition(std::array<T, SIZE>& elements, int lo, int hi);
public:
    template <typename T, size_t SIZE>
    void sort(std::array<T, SIZE>& elements, int lo, int hi);

    template <typename T, size_t SIZE>
    void quicksort(std::array<T, SIZE>& elements, int lo, int hi);
};

template <typename T, size_t SIZE>
int QuicksortAlgorithm::partition(std::array<T, SIZE> &elements, int lo, int hi) {
    int i = lo, j = hi+1;
    T v = elements[lo];
    while(true){
        while(elements[++i] < v) if(i == hi) break;
        while(v < elements[--j]) if(j == lo) break;
        if(i >= j) break;
        std::swap(elements[i], elements[j]);
    }
    std::swap(elements[lo], elements[j]);
    return j;
}

template <typename T, size_t SIZE>
void QuicksortAlgorithm::sort(std::array<T, SIZE> &elements, int lo, int hi) {
    if(hi <= lo) return;
    int j = partition(elements, lo, hi);
    this->sort(elements, lo, j-1);
    this->sort(elements, j+1, hi);
}

template <typename T, size_t SIZE>
void QuicksortAlgorithm::quicksort(std::array<T, SIZE> &elements, int l, int r) {
    int i = l-1, j = r, p = l-1, q = r; T v = elements[r];
    if (r <= l) return;
    for (;;)
    {
        while (elements[++i] < v) ;
        while (v < elements[--j]) if (j == l) break;
        if (i >= j) break;
        std::swap(elements[i], elements[j]);
        if (elements[i] == v) { p++; std::swap(elements[p], elements[i]); }
        if (v == elements[j]) { q--; std::swap(elements[j], elements[q]); }
    }
    std::swap(elements[i], elements[r]); j = i-1; i = i+1;
    for (int k = l; k < p; k++, j--) std::swap(elements[k], elements[j]);
    for (int k = r-1; k > q; k--, i++) std::swap(elements[i], elements[k]);
    quicksort(elements, l, j);
    quicksort(elements, i, r);
}

#endif //SORTINGALGORITHM_QUICKSORTALGORITHM_H
