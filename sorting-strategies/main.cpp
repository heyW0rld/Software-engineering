#include <iostream>

#include "Container.h"
#include "strategy/BubbleSort.h"
#include "strategy/InsertionSort.h"
#include "strategy/SelectionSort.h"
#include "strategy/MergeSort.h"
#include "strategy/HeapSort.h"
#include "strategy/QuickSort.h"

int main()
{
    int a[] = {4,3,5,2,8,1};
    Container<int> A(sizeof(a) / sizeof(a[0]), a);

    Sorting<int>* sorting = new QuickSort<int>();
    sorting->setCondtion([] (int left, int right)
                         {
                             return left < right;
                         });
    A.setSorting(sorting);

    Container<int> B = A.clone();
    B.sort();
    B.print();

    return 0;
}
