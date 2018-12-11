#include "SpellCaster.h"
//In spellcaster constructor is called twice: in Unit constr and in magic_state - the same parameters - is it OK?
SpellCaster::SpellCaster(int hp, int mana, int damage, const std::string& name) : Unit(hp, damage, name, MAGIC) {
    this->magic_state = new MagicState(hp, damage, name, mana);
    this->magic_attack = new MagicAttack();
}

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