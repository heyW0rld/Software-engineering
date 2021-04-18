//
// Created by HW on 21.03.2021.
//

#include "FactoryFarnitureEconom.h"
#include <iostream>

FactoryFarnitureEconom* FactoryFarnitureEconom::_instance = nullptr;



FactoryFarnitureEconom::~FactoryFarnitureEconom()
{
    delete _builderSofaEconom;
}

Sofa* FactoryFarnitureEconom::createSofa()
{
    _builderSofaEconom = new BuilderSofaEconom();

    _builderSofaEconom->setMaterial();
    _builderSofaEconom->setSheathing();

    return _builderSofaEconom->getProduct();
}

Chair* FactoryFarnitureEconom::createChair()
{
    _builderChairEconom = new BuilderChairEconom();

    _builderChairEconom->setBackrest();
    _builderChairEconom->setSheathing();

    return _builderChairEconom->getProduct();
}

FactoryFarnitureEconom* FactoryFarnitureEconom::getInstance()
{
    if(!_instance)
    {
        _instance = new FactoryFarnitureEconom();
    }

    return _instance;
}
