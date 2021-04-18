//
// Created by HW on 28.03.2021.
//

#ifndef LAB1_BUILDERCHAIRPREMIUM_H
#define LAB1_BUILDERCHAIRPREMIUM_H


#include "../abstract/BuilderChair.h"
#include "../../products/concrete/ChairPremium.h"

class BuilderChairPremium: public BuilderChair {
private:
    ChairPremium* _chairPremium;
public:
    BuilderChairPremium();
    void setBackrest() override;
    void setSheathing() override;
    ChairPremium * getProduct();
    ~BuilderChairPremium();
};



#endif //LAB1_BUILDERCHAIRPREMIUM_H
