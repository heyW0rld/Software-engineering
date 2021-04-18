//
// Created by HW on 26.03.2021.
//

#include "BuilderSofaEconom.h"


void BuilderSofaEconom::setMaterial()
{
    _sofaEconom->setMaterial("pine");
}

void BuilderSofaEconom::setSheathing()
{
    _sofaEconom->setSheathing("chenille");
}


BuilderSofaEconom::BuilderSofaEconom()
{
    _sofaEconom = new SofaEconom();
}

SofaEconom* BuilderSofaEconom::getProduct()
{
    return _sofaEconom;
}

BuilderSofaEconom::~BuilderSofaEconom()
{
    delete _sofaEconom;
}