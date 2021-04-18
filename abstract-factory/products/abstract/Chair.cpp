//
// Created by HW on 21.03.2021.
//

#include "Chair.h"

//
// Created by HW on 21.03.2021.
//

#include "Chair.h"

void Chair::setBackrest(const bool & backrest)
{
    _backrest = backrest;
}

void Chair::setSheathing(const bool& sheathing)
{
    _sheathing = sheathing;
}

const bool & Chair::getBackrest()
{
    return _backrest;
}

const bool& Chair::getSheathing()
{
    return _sheathing;
}
