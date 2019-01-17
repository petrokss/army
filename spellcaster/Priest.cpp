#include "Priest.h"

//attacks damage spells 50%, but healing spells 100%, takes 2x damage to Vampire, Necromancer
Priest::Priest(int hp, int mana, int damage, const std::string& name) : SpellCaster(hp, mana, damage, name) {
    this->unit_attack = new PriestAttack();
    this->magic_attack = new MagicPriestAttack();
    this->spellBook->addSpell(fireball, new Fireball(30, 15));
    this->spellBook->addSpell(heal, new Heal(30, 30));
    std::cout << "Priest constructor" << std::endl;
}
Priest::~Priest() {
    delete this->magic_attack;
    delete this->unit_attack;
    std::cout << "Priest destructor" << std::endl;
}

void Priest::attack(Unit* enemy) {
    this->unit_attack->attack(this, enemy);
}

void Priest::cast(Unit* target, spellNames spellName) {
    this->magic_attack->cast(this, target, spellName);
}
