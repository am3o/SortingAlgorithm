//
// Created by am3o on 25.11.15.
//

#ifndef SORTINGALGORITHM_QUICKSORTALGORITHM_H
#define SORTINGALGORITHM_QUICKSORTALGORITHM_H

#include "SortingAlgorithmBase.h"
#include "MergeSortAlgorithm.h"

#define QS_TO_INSERT_THRESHOLD 25
#define FACTOR_WORSTCASE 10

class QuickSortAlgorithm : public SortingAlgorithmBase {
private:
    template <typename T, size_t SIZE>
    void internalSort(std::array<T, SIZE>& elements, size_t lo, size_t hi);

    template <typename T, size_t SIZE>
    void internalSortHybrid(std::array<T, SIZE>& elements, std::array<T, SIZE>& tmp, size_t lo, size_t hi);

    template <typename T, size_t SIZE>
    void internalInsertSortWithGuardian(std::array<T, SIZE>& elements, size_t lo, size_t hi);

    template <typename T, size_t SIZE>
    void internalMerge(std::array<T, SIZE>& elements, std::array<T, SIZE>& aux, size_t lo, size_t hi);
public:
    template <typename T, size_t SIZE>
    void sortHybrid(std::array<T, SIZE>& elements);

    template <typename T, size_t SIZE>
    void sort(std::array<T, SIZE>& elements);
};

template <typename T, size_t SIZE>
void QuickSortAlgorithm::internalSort(std::array<T, SIZE> &elements, size_t lo, size_t hi) {
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
void QuickSortAlgorithm::internalInsertSortWithGuardian(std::array<T, SIZE> &elements,
                                                        size_t lo, size_t hi) {
    T* guardian = this->findMinimumOptimized(elements, lo, hi);
    std::swap(elements[lo], *guardian);
    for(size_t i = 1; i < hi + 1; i++) {
        T tempValue = elements[i];
        for(size_t j = i; tempValue < elements[j-1]; j--) {
            elements[j] = elements[j-1];
            elements[j-1] = tempValue;
        }
    }
}
template <typename T, size_t SIZE>
void QuickSortAlgorithm::internalMerge(std::array<T, SIZE> &elements, std::array<T, SIZE> &aux, size_t lo,
                                       size_t hi) {
    size_t i = lo, mid = lo + (hi - lo)/2, j = mid + 1;

    for(size_t k = lo ;k <= hi; k++ )
        aux[k] = elements[k];

    for(size_t k = lo; k <= hi; k++){
        if      (i > mid)   elements[k] = aux[j++];
        else if (j > hi)    elements[k] = aux[i++];
        else if (aux[j] < aux[i]) elements[k] = aux[j++];
        else elements[k] = aux[i++];
    }
}

template <typename T, size_t SIZE>
void QuickSortAlgorithm::internalSortHybrid(std::array<T, SIZE> &elements, std::array<T, SIZE> &tmp, size_t lo,
                                            size_t hi) {
    if(hi - lo >= 10){
        this->internalInsertSortWithGuardian(elements, lo, hi);
    }else{
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

        if(((j - lo) < (FACTOR_WORSTCASE * (hi - i))) || (((j - lo) * FACTOR_WORSTCASE < (hi -i)))){
            size_t mid = (hi + lo) / 2;
            internalSortHybrid(elements, tmp, lo, mid);
            internalSortHybrid(elements, tmp, mid + 1, hi);
            internalMerge(elements, tmp, lo, hi);
        }else{
            internalSortHybrid(elements, tmp, lo, j);
            internalSortHybrid(elements, tmp, i, hi);
        }
    }
}

template <typename T, size_t SIZE>
void QuickSortAlgorithm::sortHybrid(std::array<T, SIZE> &elements) {
    std::array<T, SIZE>* aux = new std::array<T, SIZE>();
    this->internalSortHybrid(elements, *aux, 0, SIZE-1);
}

template <typename T, size_t SIZE>
void QuickSortAlgorithm::sort(std::array<T, SIZE> &elements) {
    this->internalSort(elements, 0, SIZE-1);
}


#endif //SORTINGALGORITHM_QUICKSORTALGORITHM_H
