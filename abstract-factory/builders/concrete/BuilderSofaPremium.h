//
// Created by HW on 28.03.2021.
//

#ifndef LAB1_BUILDERSOFAPREMIUM_H
#define LAB1_BUILDERSOFAPREMIUM_H


#include "../abstract/BuilderSofa.h"
#include "../../products/concrete/SofaPremium.h"

class BuilderSofaPremium: public BuilderSofa {
private:
    SofaPremium* _sofaPremium;
public:
    BuilderSofaPremium();
    void setMaterial() override;
    void setSheathing() override;
    SofaPremium * getProduct();
    ~BuilderSofaPremium();
};



#endif //LAB1_BUILDERSOFAPREMIUM_H
