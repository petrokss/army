#include "Warlock.h"

//creates Demons (extends class Soldier)
Warlock::Warlock(int hp, int mana, int damage, const std::string& name) : SpellCaster(hp, mana, damage, name) {
    std::cout << "Warlock constructor" << std::endl;
}
Warlock::~Warlock() {
    std::cout << "Warlock destructor" << std::endl;
}