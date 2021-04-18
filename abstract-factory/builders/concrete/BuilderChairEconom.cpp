//
// Created by HW on 26.03.2021.
//

#include "BuilderChairEconom.h"


void BuilderChairEconom::setBackrest()
{
    _chairEconom->setBackrest(false);
}

void BuilderChairEconom::setSheathing()
{
    _chairEconom->setSheathing(false);
}


BuilderChairEconom::BuilderChairEconom()
{
    _chairEconom = new ChairEconom();
}

ChairEconom* BuilderChairEconom::getProduct()
{
    return _chairEconom;
}

BuilderChairEconom::~BuilderChairEconom()
{

    delete _chairEconom;
}