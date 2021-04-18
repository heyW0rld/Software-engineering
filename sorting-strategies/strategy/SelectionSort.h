//
// Created by HW on 12.04.2021.
//

#ifndef LAB3_SELECTIONSORT_H
#define LAB3_SELECTIONSORT_H

#include "Sorting.h"

template <class T>
class SelectionSort: public Sorting<T>{
public:
    void sort(unsigned size, T data[]) override
    {
        for (unsigned i = 0; i < size - 1; i++)
        {
            unsigned max_index = i;

            for (unsigned j = i + 1; j < size; j++)
            {
                if (!this->_condition(data[j], data[max_index]))
                {
                    max_index = j;
                }
            }

            if (max_index != i)
            {
                std::swap(data[i], data[max_index]);
            }
        }
    }
};

#endif //LAB3_SELECTIONSORT_H
