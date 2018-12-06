#include "Vampire.h"

Vampire::Vampire(int hp, int damage, const std::string& name) : Unit(hp, damage, name, VAMPIRE) {
    std::cout << "Vampire construntor" << std::endl;
}

Vampire::~Vampire() {
    std::cout << "Vampire destructor" << std::endl;
}