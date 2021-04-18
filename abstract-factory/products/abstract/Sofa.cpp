//
// Created by HW on 21.03.2021.
//

#include "Sofa.h"

void Sofa::setMaterial(const std::string& material)
{
    _material = material;
}

void Sofa::setSheathing(const std::string& sheathing)
{
    _sheathing = sheathing;
}

const std::string& Sofa::getMaterial() {
    return _material;
}

const std::string& Sofa::getSheathing() {
    return _sheathing;
}
