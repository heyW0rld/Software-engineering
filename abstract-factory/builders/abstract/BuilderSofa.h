//
// Created by HW on 21.03.2021.
//

#ifndef LAB1_BUILDERSOFA_H
#define LAB1_BUILDERSOFA_H

#include "../../products/abstract/Sofa.h"

class BuilderSofa {
public:
    virtual void setSheathing() = 0;
    virtual void setMaterial() = 0;
};


#endif //LAB1_BUILDERSOFA_H
