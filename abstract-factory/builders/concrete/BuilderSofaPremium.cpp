//
// Created by HW on 26.03.2021.
//

#include "BuilderSofaPremium.h"


void BuilderSofaPremium::setMaterial()
{
    _sofaPremium->setMaterial("oak");
}

void BuilderSofaPremium::setSheathing()
{
    _sofaPremium->setSheathing("velvet");
}


BuilderSofaPremium::BuilderSofaPremium()
{
    _sofaPremium = new SofaPremium();
}

SofaPremium* BuilderSofaPremium::getProduct()
{
    return _sofaPremium;
}

BuilderSofaPremium::~BuilderSofaPremium()
{
    delete _sofaPremium;
}