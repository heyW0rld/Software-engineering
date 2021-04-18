//
// Created by HW on 15.04.2021.
//

#ifndef LAB3_HEAPSORT_H
#define LAB3_HEAPSORT_H

#include "Sorting.h"

template <class T>
class HeapSort: public Sorting<T>{
public:
    void sort(unsigned size, T data[]) override
    {
        for (int i = size / 2 - 1; i >= 0; i--)
            heapify(data, size, i);

        for (int i = size - 1; i >= 0; i--)
        {
            std::swap(data[0], data[i]);

            heapify(data, i, 0);
        }
    }

private:
    void heapify(int arr[], int n, int root)
    {
        int largest = root;
        int l = 2 * root + 1;
        int r = 2 * root + 2;

        if (l < n && this->_condition(arr[l], arr[largest]))
            largest = l;

        if (r < n && this->_condition(arr[r], arr[largest]))
            largest = r;

        if (largest != root)
        {
            std::swap(arr[root], arr[largest]);

            heapify(arr, n, largest);
        }
    }

};


#endif //LAB3_HEAPSORT_H
