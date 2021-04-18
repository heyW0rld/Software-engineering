//
// Created by HW on 12.04.2021.
//

#ifndef LAB3_ICLONABLE_H
#define LAB3_ICLONABLE_H

template <class T>
class IClonable{
public:
    virtual T clone() = 0;
};


#endif //LAB3_ICLONABLE_H
