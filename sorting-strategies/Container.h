//
// Created by HW on 12.04.2021.
//

#ifndef LAB3_CONTAINER_H
#define LAB3_CONTAINER_H

#include <exception>

#include "interface/IClonable.h"
#include "strategy/Sorting.h"

template <class T>
class Container: public IClonable<Container<T>> {
private:
    unsigned _size;
    T* _data;
    Sorting<T>* _sorting;

public:
    Container() = default;

    Container(unsigned size, T data[]):  _size(size), _data(new T[_size]), _sorting(nullptr)
    {
        for(unsigned i = 0; i < _size; ++i)
            _data[i] = data[i];
    }

    ~Container()
    {
        delete[] _data;
    }

    Container<T> clone() override
    {
        Container<T> copy;
        copy._data = new T[_size];
        copy._size = _size;
        copy._sorting = _sorting;


        for(unsigned  i = 0; i < _size; ++i)
            copy._data[i] = _data[i];

        return copy;
    }

    void sort()
    {
        if(!_sorting || _sorting->isConditionNull())
            throw std::bad_function_call();

        _sorting->sort(_size, _data);
    }

    void setSorting(Sorting<T> *sorting)
    {
        _sorting = sorting;
    }


    void print()
    {
        std::cout << _size << std::endl;
        for(int i = 0; i < _size; i++)
            std::cout << _data[i] << " ";

        std::cout << std::endl;
    }
};



#endif //LAB3_CONTAINER_H
