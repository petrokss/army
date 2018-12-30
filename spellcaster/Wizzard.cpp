#include "Wizzard.h"


//attacks damage spells 100%, but healing spells 50%
Wizzard::Wizzard(int hp, int mana, int damage, const std::string& name) : SpellCaster(hp, mana, damage, name) {
    this->spellBook->insert(std::pair<spellNames, Spell*>(fireball, new Fireball(30, 30)));
    this->spellBook->insert(std::pair<spellNames, Spell*>(heal, new Heal(30, 15)));

    std::cout << "Wizzard constructor" << std::endl;
}
Wizzard::~Wizzard() {
    std::cout << "Wizzard destructor" << std::endl;
}