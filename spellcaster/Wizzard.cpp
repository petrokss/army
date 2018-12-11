#include "Wizzard.h"

//attacks damage spells 100%, but healing spells 50%
Wizzard::Wizzard(int hp, int mana, int damage, const std::string& name) : SpellCaster(hp, mana, damage, name) {
    std::cout << "Wizzard constructor" << std::endl;
}
Wizzard::~Wizzard() {
    std::cout << "Wizzard destructor" << std::endl;
}