//
// Created by HW on 16.04.2021.
//

#ifndef LAB3_QUICKSORT_H
#define LAB3_QUICKSORT_H

#include "Sorting.h"

template <class T>
class QuickSort: public Sorting<T>{
public:
    void sort(unsigned size, T data[])
    {
        quickSort(data, 0, size - 1);
    }

private:
    int partition(int *a,int start,int end)
    {
        int pivot=a[end];

        int p_index=start;
        int i,t;

        for(i=start;i<end;i++)
        {
            if(this->_condition(a[i], pivot))
            {
                t=a[i];
                a[i]=a[p_index];
                a[p_index]=t;
                p_index++;
            }
        }

        t=a[end];
        a[end]=a[p_index];
        a[p_index]=t;

        return p_index;
    }
    void quickSort(int *a,int start,int end)
    {
        if(start<end)
        {
            int P_index=partition(a,start,end);
            quickSort(a,start,P_index-1);
            quickSort(a,P_index+1,end);
        }
    }

};


#endif //LAB3_QUICKSORT_H
