cmake_minimum_required(VERSION 3.17)
project(lab3)

set(CMAKE_CXX_STANDARD 14)

add_executable(lab3 main.cpp strategy/Sorting.h strategy/BubbleSort.h Container.h interface/IClonable.h strategy/InsertionSort.h strategy/SelectionSort.h  strategy/MergeSort.h  strategy/HeapSort.h strategy/QuickSort.h)