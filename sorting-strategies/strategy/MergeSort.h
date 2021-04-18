//
// Created by HW on 15.04.2021.
//

#ifndef LAB3_MERGESORT_H
#define LAB3_MERGESORT_H

#include "Sorting.h"

template <class T>
class MergeSort: public Sorting<T>{
public:
    void sort(unsigned size, T data[]) override {
        size_t blockSize;
        size_t block;
        size_t leftBlock;
        size_t rightBlock;
        size_t merge;

        size_t leftBorder;
        size_t midBorder;
        size_t rightBorder;
        for (blockSize = 1; blockSize < size; blockSize *= 2) {
            for (block = 0; block < size - blockSize; block += 2 * blockSize) {
                leftBlock = 0;
                rightBlock = 0;
                leftBorder = block;
                midBorder = block + blockSize;
                rightBorder = block + 2 * blockSize;
                rightBorder = (rightBorder < size) ? rightBorder : size;
                int *sortedBlock = new int[rightBorder - leftBorder];

                while (leftBorder + leftBlock < midBorder && midBorder + rightBlock < rightBorder) {
                    if (this->_condition(data[leftBorder + leftBlock], data[midBorder + rightBlock])) {
                        sortedBlock[leftBlock + rightBlock] = data[leftBorder + leftBlock];
                        leftBlock += 1;
                    } else {
                        sortedBlock[leftBlock + rightBlock] = data[midBorder + rightBlock];
                        rightBlock += 1;
                    }
                }

                while (leftBorder + leftBlock < midBorder) {
                    sortedBlock[leftBlock + rightBlock] = data[leftBorder + leftBlock];
                    leftBlock += 1;
                }
                while (midBorder + rightBlock < rightBorder) {
                    sortedBlock[leftBlock + rightBlock] = data[midBorder + rightBlock];
                    rightBlock += 1;
                }

                for (merge = 0; merge < leftBlock + rightBlock; merge++) {
                    data[leftBorder + merge] = sortedBlock[merge];
                }

                delete[] sortedBlock;
            }
        }
    }
};

#endif //LAB3_MERGESORT_H
