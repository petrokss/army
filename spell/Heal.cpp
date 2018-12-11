#include "Heal.h"

Heal::Heal(int cost, int points) : Spell(cost, points) {
    std::cout << "Heal constructor" << std::endl;
}
Heal::~Heal() {
    std::cout << "Heal destructor" << std::endl;
}

void Heal::action(Unit* target) {
    target->addHp(this->points);
}