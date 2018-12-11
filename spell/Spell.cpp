#include "Spell.h"

Spell::Spell(int cost, int points) : cost(cost), points(points) {
    std::cout << "Spell constructor" << std::endl;
}
Spell::~Spell() {
    std::cout << "Spell destructor" << std::endl;
}

int Spell::getCost() const {
    return this->cost;
}
int Spell::getPoint() const {
    return this->points;
}

// virtual void Spell::action(Unit* target) {

// }