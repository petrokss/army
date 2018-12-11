#include "Necromancer.h"

//watches all who he attacked, in case of the death of the attacked unit, receives a part of its hp
Necromancer::Necromancer(int hp, int mana, int damage, const std::string& name) : SpellCaster(hp, mana, damage, name) {
    std::cout << "Necromancer constructor" << std::endl;
}
Necromancer::~Necromancer() {
    std::cout << "Necromancer destructor" << std::endl;
}