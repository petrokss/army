#include "Wizzard.h"
// #include "../spell/Heal.h"

//attacks damage spells 100%, but healing spells 50%
Wizzard::Wizzard(int hp, int mana, int damage, const std::string& name) : SpellCaster(hp, mana, damage, name) {
    std::cout << "Wizzard constructor" << std::endl;
    this->spellBook = {{1, new Fireball(30, 30)}, {2, new Heal(30, 15)}};
}
Wizzard::~Wizzard() {
    std::cout << "Wizzard destructor" << std::endl;
}