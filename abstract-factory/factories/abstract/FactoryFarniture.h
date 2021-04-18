//
// Created by HW on 21.03.2021.
//

#ifndef LAB1_FACTORYFARNITURE_H
#define LAB1_FACTORYFARNITURE_H

#include "../../products/abstract/Sofa.h"
#include "../../products/abstract/Chair.h"
#include "../../builders/abstract/BuilderSofa.h"


class FactoryFarniture{
protected:
    std::string _name;
public:
    FactoryFarniture() = default;
    void setName(const std::string& name);
    const std::string& getName();
    virtual Sofa* createSofa() = 0;
    virtual Chair* createChair() = 0;
    virtual ~FactoryFarniture() = default;
};


#endif //LAB1_FACTORYFARNITURE_H
