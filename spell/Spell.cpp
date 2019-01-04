#include "Spell.h"

Spell::Spell(int cost, int points) : cost(cost), points(points) {
    std::cout << "Spell constructor" << std::endl;
}
//how to delete spells correctly?
Spell::~Spell() {
    //delete this;
    std::cout << "Spell destructor" << std::endl;
}

int Spell::getCost() const {
    return this->cost;
}
int Spell::getPoint() const {
    return this->points;
}

std::ostream& operator<<(std::ostream& os, const Spell& spell) {
    return os << "New spell";
}


// bool Spell::ifManaNeeded(int amount) {
//     return this->getMana()
// }
