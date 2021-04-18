//
// Created by HW on 21.03.2021.
//

#ifndef LAB1_CHAIR_H
#define LAB1_CHAIR_H

#include <string>

class Chair {
private:
    bool _backrest;
    bool _sheathing;
public:
    void setBackrest(const bool&);
    void setSheathing(const bool&);
    const bool& getBackrest();
    const bool& getSheathing();
    virtual int getCost() = 0;
};


#endif //LAB1_CHAIR_H
