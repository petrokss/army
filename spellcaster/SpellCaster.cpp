#include "SpellCaster.h"
//In spellcaster constructor is called twice: in Unit constr and in magic_state - the same parameters
SpellCaster::SpellCaster(int hp, int mana, int damage, const std::string& name) : Unit(hp, damage, name, MAGIC) {
    this->magic_state = new MagicState(hp, damage, name, mana);
    this->magic_attack = new MagicAttack();
}