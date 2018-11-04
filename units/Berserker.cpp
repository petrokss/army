#include "Berserker.h"

Berserker::Berserker(const std::string& name) : Unit(70, 10, name, new BaseAttack()) {
    std::cout << "Berserker construntor" << std::endl;
}

Berserker::~Berserker() {
    std::cout << "Berserker destructor" << std::endl;
}