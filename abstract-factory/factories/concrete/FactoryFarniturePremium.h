//
// Created by HW on 21.03.2021.
//

#ifndef LAB1_FACTORYFARNITUREPREMIUM_H
#define LAB1_FACTORYFARNITUREPREMIUM_H

#include "../abstract/FactoryFarniture.h"

#include <memory>

#include "../abstract/FactoryFarniture.h"
#include "../../builders/concrete/BuilderSofaPremium.h"
#include "../../builders/concrete/BuilderChairPremium.h"

class FactoryFarniturePremium: public FactoryFarniture {
private:
    FactoryFarniturePremium() = default;
    ~FactoryFarniturePremium();
    BuilderSofaPremium* _builderSofaPremium;
    BuilderChairPremium* _builderChairPremium;
    static FactoryFarniturePremium* _instance;
public:
    Chair* createChair() override;
    Sofa* createSofa() override;
    static FactoryFarniturePremium* getInstance();
};


#endif //LAB1_FACTORYFARNITUREPREMIUM_H
