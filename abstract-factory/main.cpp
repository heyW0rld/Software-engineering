#include <iostream>

#include "factories/concrete/FactoryFarnitureEconom.h"
#include "factories/concrete/FactoryFarniturePremium.h"

void setNameFactory(FactoryFarniture*, const std::string&);
const std::string& getNameFactory(FactoryFarniture*);
std::string isBackrest(Chair*);
std::string isSheathing(Chair*);

int main()
{
    FactoryFarniture* factoryFarniture;
    Sofa* sofa;
    Chair* chair;

    factoryFarniture = FactoryFarnitureEconom::getInstance();
    setNameFactory(factoryFarniture, "IKEA Econom");
    sofa = factoryFarniture->createSofa();
    chair = factoryFarniture->createChair();

    std::cout << "Всем привет! Сегодня мы заглянем на завод \"" << getNameFactory(factoryFarniture) << "\", производящий диваны \"" << sofa->getName()
                                                                                        << "\" и стулья по цене - " << chair->getCost() << std::endl;
    std::cout << "Материал, из которого сделан диван - " << sofa->getMaterial() << ", обшивка - " << sofa->getSheathing() << std::endl;
    std::cout << "Спинка у стула - " << isBackrest(chair) << ", обшиква - " << isSheathing(chair) << std::endl;
    std::cout << "Но завод захотел получать большую выручку..." << std::endl;

    factoryFarniture = FactoryFarniturePremium::getInstance();
    setNameFactory(factoryFarniture, "IKEA Premium");
    sofa = factoryFarniture->createSofa();
    chair = factoryFarniture->createChair();

    std::cout << "Теперь завод называется \"" << getNameFactory(factoryFarniture) << "\" и производит диваны \"" << sofa->getName()
                                                                                << "\" и стулья по цене - " << chair->getCost() << std::endl;
    std::cout << "Материал, из которого сделан диван - " << sofa->getMaterial() << ", обшивка - " << sofa->getSheathing() << std::endl;
    std::cout << "Спинка у стула - " << isBackrest(chair) << ", обшиква - " << isSheathing(chair) << std::endl;

    return 0;
}

void setNameFactory(FactoryFarniture* factory, const std::string& name)
{
    factory->setName(name);
}

const std::string& getNameFactory(FactoryFarniture* factory)
{
    return factory->getName();
}

std::string isBackrest(Chair* chair)
{
    return chair->getBackrest() ? "есть" : "отсутствует";
}

std::string isSheathing(Chair* chair)
{
    return chair->getSheathing() ? "есть" : "отсутствует";
}