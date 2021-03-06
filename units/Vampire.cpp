#include "Vampire.h"

Vampire::Vampire(int hp, int damage, const std::string& name) : Unit(hp, damage, name, VAMPIRE) {
    this->unit_attack = new VampireAttack();
    std::cout << "Vampire construntor" << std::endl;
}

Vampire::~Vampire() {
    std::cout << "Vampire destructor" << std::endl;
}

void Vampire::ability(Unit* target) {
    this->unit_attack->ability(this, target);
}
