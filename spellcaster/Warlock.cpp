#include "Warlock.h"

//creates Demons (extends class Soldier)
Warlock::Warlock(int hp, int mana, int damage, const std::string& name) : SpellCaster(hp, mana, damage, name) {
    this->demonList = new std::set<Demon*>();

    std::cout << "Warlock constructor" << std::endl;
}
Warlock::~Warlock() {
    std::cout << "Warlock destructor" << std::endl;
}

void Warlock::createDemon() {
    std::cout << "Demon constructor" << std::endl;
}


void Warlock::ability(Unit* target) {
    std::cout << "Warlock ability" << std::endl;
}
