//
// Created by HW on 28.03.2021.
//

#include "BuilderChairPremium.h"

void BuilderChairPremium::setBackrest()
{
    _chairPremium->setBackrest(true);
}

void BuilderChairPremium::setSheathing()
{
    _chairPremium->setSheathing(true);
}


BuilderChairPremium::BuilderChairPremium()
{
    _chairPremium = new ChairPremium();
}

ChairPremium* BuilderChairPremium::getProduct()
{
    return _chairPremium;
}

BuilderChairPremium::~BuilderChairPremium()
{
    delete _chairPremium;
}