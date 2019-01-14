#include "Necromancer.h"

Necromancer::Necromancer(int hp, int damage, const std::string& name) : Unit(hp, damage, name, NECROMANCER) {
    this->unit_attack = new BaseAttack();
    std::cout << "Necromancer constructor" << std::endl;
}
Necromancer::~Necromancer() {
    std::cout << "Necromancer destructor" << std::endl;
}