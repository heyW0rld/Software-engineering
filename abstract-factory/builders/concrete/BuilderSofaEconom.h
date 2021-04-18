//
// Created by HW on 26.03.2021.
//

#ifndef LAB1_BUILDERSOFAECONOM_H
#define LAB1_BUILDERSOFAECONOM_H

#include "../abstract/BuilderSofa.h"
#include "../../products/concrete/SofaEconom.h"

class BuilderSofaEconom: public BuilderSofa {
private:
    SofaEconom* _sofaEconom;
public:
    BuilderSofaEconom();
    void setMaterial() override;
    void setSheathing() override;
    SofaEconom * getProduct();
    ~BuilderSofaEconom();
};


#endif //LAB1_BUILDERSOFAECONOM_H
