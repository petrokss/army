#include "SpellCaster.h"

SpellCaster::SpellCaster(int hp, int mana, int damage, const std::string& name) : Unit(hp, damage, name, MAGIC) {
    this->magic_state = new MagicState(hp, damage, name, mana);
    //this->magic_attack = new MagicAttack();
    this->spellBook = new Book();
    std::cout << " SpellCaster [" << this->getName() << "] constructor" << std::endl;
}

SpellCaster::~SpellCaster() {}

const int SpellCaster::getMana() const {
    return this->magic_state->getMana();
}

const int SpellCaster::getManaLimit() const {
    return this->magic_state->getManaLimit();
}

MagicState& SpellCaster::getMagicState() const {
    return *(this->magic_state);
}

void SpellCaster::spendMana(int cost) {
    return this->magic_state->spendMana(cost);
}

void SpellCaster::increaseMana(int cost) {
    return this->magic_state->increaseMana(cost);
}

Book& SpellCaster::getSpellBook() const {
   return *(this->spellBook);
}

Spell* SpellCaster::findSpell(spellNames spellName) {
    return spellBook->findSpell(spellName);
}


void SpellCaster::cast(Unit* enemy, spellNames spellName) {
    this->magic_attack->cast(this, enemy, spellName);
}

std::ostream& operator<<(std::ostream& out, SpellCaster& spellcaster ) {
    out << spellcaster.getName();
    out << " [hp: " << spellcaster.getHp();
    out << ", dmg: " << spellcaster.getDamage();
    out << ", mana: " << spellcaster.getMana();
    out << "]";
    return out;
}
