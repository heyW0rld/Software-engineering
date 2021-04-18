//
// Created by HW on 21.03.2021.
//

#ifndef LAB1_SOFA_H
#define LAB1_SOFA_H

#include <string>


class Sofa {
private:
    std::string _material;
    std::string _sheathing;
public:
    void setMaterial(const std::string&);
    void setSheathing(const std::string&);
    const std::string& getMaterial();
    const std::string& getSheathing();
    virtual std::string getName() = 0;
};


#endif //LAB1_SOFA_H
