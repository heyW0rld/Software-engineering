//
// Created by HW on 21.03.2021.
//

#ifndef LAB1_FACTORYFARNITUREECONOM_H
#define LAB1_FACTORYFARNITUREECONOM_H

#include <memory>

#include "../abstract/FactoryFarniture.h"
#include "../../builders/concrete/BuilderSofaEconom.h"
#include "../../builders/concrete/BuilderChairEconom.h"

class FactoryFarnitureEconom: public FactoryFarniture {
private:
    FactoryFarnitureEconom() = default;
    ~FactoryFarnitureEconom();
    BuilderSofaEconom* _builderSofaEconom;
    BuilderChairEconom* _builderChairEconom;
    static FactoryFarnitureEconom* _instance;
public:
    Chair* createChair() override;
    Sofa* createSofa() override;
    static FactoryFarnitureEconom* getInstance();
};


#endif //LAB1_FACTORYFARNITUREECONOM_H
