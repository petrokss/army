#include "Berserker.h"

Berserker::Berserker(int hp, int damage, const std::string& name) : Unit(hp, damage, name) {
    std::cout << "Berserker construntor" << std::endl;
}

Berserker::~Berserker() {
    std::cout << "Berserker destructor" << std::endl;
}