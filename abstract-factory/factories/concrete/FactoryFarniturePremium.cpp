//
// Created by HW on 21.03.2021.
//

#include "FactoryFarniturePremium.h"


FactoryFarniturePremium* FactoryFarniturePremium::_instance = nullptr;



FactoryFarniturePremium::~FactoryFarniturePremium()
{
    delete _builderSofaPremium;
}

Sofa* FactoryFarniturePremium::createSofa()
{
    _builderSofaPremium = new BuilderSofaPremium();

    _builderSofaPremium->setMaterial();
    _builderSofaPremium->setSheathing();

    return _builderSofaPremium->getProduct();
}

Chair* FactoryFarniturePremium::createChair()
{
    _builderChairPremium = new BuilderChairPremium();

    _builderChairPremium->setBackrest();
    _builderChairPremium->setSheathing();

    return _builderChairPremium->getProduct();
}

FactoryFarniturePremium* FactoryFarniturePremium::getInstance()
{
    if(!_instance)
    {
        _instance = new FactoryFarniturePremium();
    }

    return _instance;
}
