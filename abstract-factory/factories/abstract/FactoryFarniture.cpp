//
// Created by HW on 21.03.2021.
//

#include "FactoryFarniture.h"
#include "../concrete/FactoryFarniturePremium.h"

void FactoryFarniture::setName(const std::string& name)
{
    _name = name;
}

const std::string& FactoryFarniture::getName()
{
    return _name;
}