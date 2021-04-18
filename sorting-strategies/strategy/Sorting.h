//
// Created by HW on 12.04.2021.
//

#ifndef LAB3_SORTING_H
#define LAB3_SORTING_H


template <class T>
class Sorting{
protected:
    std::function<bool(T left, T right)> _condition;
public:
    Sorting(): _condition(nullptr) {}

    virtual void sort(unsigned size, T data[]) = 0;

    void setCondtion(std::function<bool(T, T)> condition)
    {
        _condition = condition;
    }

    bool isConditionNull()
    {
        return _condition == nullptr;
    }
};

#endif //LAB3_SORTING_H