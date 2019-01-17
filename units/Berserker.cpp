#include "Berserker.h"

Berserker::Berserker(int hp, int damage, const std::string& name) : Unit(hp, damage, name, USUAL) {
    this->unit_attack = new BaseAttack();
    std::cout << "Berserker construntor" << std::endl;
}

Berserker::~Berserker() {
    delete this->unit_attack;
    std::cout << "Berserker destructor" << std::endl;
}