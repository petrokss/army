#include "Healer.h"

//attacks damage spells 50%, but healing spells 100%
Healer::Healer(int hp, int mana, int damage, const std::string& name) : SpellCaster(hp, mana, damage, name) {
    this->spellBook->addSpell(fireball, new Fireball(30, 15));
    this->spellBook->addSpell(heal, new Heal(30, 30));
    std::cout << "Healer constructor" << std::endl;
}
Healer::~Healer() {
    std::cout << "Healer destructor" << std::endl;
}