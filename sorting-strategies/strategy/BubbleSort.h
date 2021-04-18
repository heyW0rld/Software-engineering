//
// Created by HW on 12.04.2021.
//

#ifndef LAB3_BUBBLESORT_H
#define LAB3_BUBBLESORT_H

#include "Sorting.h"

template <class T>
class BubbleSort: public Sorting<T>{
public:
    void sort(unsigned size, T data[]) override
    {
        for(unsigned i = 0; i < size - 1; ++i)
        {
            for (int j = 0; j < size - i - 1; ++j)
            {
                if (this->_condition(data[j], data[j + 1]))
                {
                    std::swap(data[j].data[j + 1]);
                }
            }
        }
    }
};


#endif //LAB3_BUBBLESORT_H
