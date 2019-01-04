#include "SpellCaster.h"

//In spellcaster constructor is called twice: in Unit constr and in magic_state - the same parameters - is it OK?
SpellCaster::SpellCaster(int hp, int mana, int damage, const std::string& name) : Unit(hp, damage, name, MAGIC) {
    this->magic_state = new MagicState(hp, damage, name, mana);
    //this->magic_attack = new MagicAttack();
    //this->spellBook = new std::map<spellNames, Spell*>;
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

// Spell& SpellCaster::findSpell(spellNames spellName) {
//     return spellBook->findSpell(spellName);
// }


// Book& SpellCaster::showSpellBook() {
//     std::cout << getSpellBook() << std::endl;
// }

std::ostream& operator<<(std::ostream& out, SpellCaster& spellcaster ) {
    out << spellcaster.getName();
    out << " [hp: " << spellcaster.getHp();
    out << ", dmg: " << spellcaster.getDamage();
    out << ", mana: " << spellcaster.getMana();
    out << "]";
    return out;
}



// std::ostream& operator<<(std::ostream& os, const std::map<spellNames, Spell*>& spellBook) {
//     for (const auto &p : spellBook) {
//         os << p.first << ": " << p.second;
//     }
//     return os;
// }


// std::ostream& operator<<(std::ostream& os, const std::map<spellNames, Spell*>& spellBook) {
//     for (std::map<spellNames, Spell*>::const_iterator it = spellBook.begin(); it != spellBook.end(); it++ ) {
//         os << it->first << " " << it->second;
//     }
//     return os;
// }
