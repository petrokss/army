#include "Vampire.h"

Vampire::Vampire(const std::string& name) : Unit(70, 10, name, new BaseAttack()) {
    std::cout << "Vampire construntor" << std::endl;
}

Vampire::~Vampire() {
    std::cout << "Vampire destructor" << std::endl;
}