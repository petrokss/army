#include "Priest.h"

//attacks damage spells 50%, but healing spells 100%, takes 2x damage to Vampire, Necromancer
Priest::Priest(int hp, int mana, int damage, const std::string& name) : SpellCaster(hp, mana, damage, name) {
    std::cout << "Priest constructor" << std::endl;
}
Priest::~Priest() {
    std::cout << "Priest destructor" << std::endl;
}