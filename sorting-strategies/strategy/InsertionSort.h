//
// Created by HW on 12.04.2021.
//

#ifndef LAB3_INSERTIONSORT_H
#define LAB3_INSERTIONSORT_H

#include "Sorting.h"

template <class T>
class InsertionSort: public Sorting<T>{
public:
    void sort(unsigned size, T data[]) override
    {
        for(unsigned i=1;i < size; ++i)
        {
            for(unsigned j = i; j > 0 && this->_condition(data[j-1], data[j]); --j)
            {
                std::swap(data[j-1], data[j]);
            }
        }
    }
};



#endif //LAB3_INSERTIONSORT_H
