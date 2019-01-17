#include "Wizzard.h"

Wizzard::Wizzard(int hp, int mana, int damage, const std::string& name) : SpellCaster(hp, mana, damage, name) {
    this->unit_attack = new BaseAttack();
    this->magic_attack = new MagicAttack();
    this->spellBook->addSpell(fireball, new Fireball(30, 30));
    this->spellBook->addSpell(heal, new Heal(30, 15));
    std::cout << "Wizzard constructor" << std::endl;
}
Wizzard::~Wizzard() {
    delete this->magic_attack;
    delete this->unit_attack;
    std::cout << "Wizzard destructor" << std::endl;
}