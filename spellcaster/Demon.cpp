#include "Demon.h"

Demon::Demon(int hp, int damage, const std::string& name) : Soldier(hp, damage, name) {
    std::cout << "Demon constructor" << std::endl;
}

Demon::~Demon() {
    std::cout << "Demon destructor" << std::endl;
}

void Demon::die() {
    delete this;
}

void Demon::lightningBeat(Unit* target) {
    target->takeDamage(10);
}
