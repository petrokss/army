#include "Warlock.h"

//creates Demons (extends class Soldier)
Warlock::Warlock(int hp, int mana, int damage, const std::string& name) : SpellCaster(hp, mana, damage, name) {
    this->demonList = new std::set<Demon*>();

    std::cout << "Warlock constructor" << std::endl;
}
Warlock::~Warlock() {
    
}

Demon* Warlock::createDemon() {
    Demon* demon = new Demon(50, 10);
    this->demonList->insert(demon);
    return demon;
}

void deleteDemon(Demon* demon) {
    
}


void Warlock::ability(Unit* target) {
    std::set<Demon*>::iterator it;

    for( it = demonList->begin(); it != demonList->end(); demonList++ ) {
        Demon* demon = *it;

        demon->lightningBeat(target);
    }
}
