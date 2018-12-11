#include "Healer.h"

//attacks damage spells 50%, but healing spells 100%
Healer::Healer(int hp, int mana, int damage, const std::string& name) : SpellCaster(hp, mana, damage, name) {
    std::cout << "Healer constructor" << std::endl;
}
Healer::~Healer() {
    std::cout << "Healer destructor" << std::endl;
}