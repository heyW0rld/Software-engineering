//
// Created by HW on 28.03.2021.
//

#ifndef LAB1_BUILDERCHAIRECONOM_H
#define LAB1_BUILDERCHAIRECONOM_H


#include "../abstract/BuilderChair.h"
#include "../../products/concrete/ChairEconom.h"

class BuilderChairEconom: public BuilderChair {
private:
    ChairEconom* _chairEconom;
public:
    BuilderChairEconom();
    void setBackrest() override;
    void setSheathing() override;
    ChairEconom * getProduct();
    ~BuilderChairEconom();
};

#endif //LAB1_BUILDERCHAIRECONOM_H
