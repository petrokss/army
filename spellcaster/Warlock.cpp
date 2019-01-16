#include "Warlock.h"

//creates Demons (extends class Soldier)
Warlock::Warlock(int hp, int mana, int damage, const std::string& name) : SpellCaster(hp, mana, damage, name) {
    this->demonList = new std::set<Demon*>();
    this->unit_attack = new BaseAttack();
    this->spellBook->addSpell(fireball, new Fireball(30, 30));
    this->spellBook->addSpell(heal, new Heal(30, 15));

    std::cout << "Warlock constructor" << std::endl;
}
Warlock::~Warlock() {
    std::cout << "Warlock destructor" << std::endl;
}

void Warlock::createDemon() {
    Demon* demon = new Demon(50, 10);
    this->demonList->insert(demon);
}

void Warlock::eraseDemon(Demon* demon) {
    this->demonList->erase(demon);
}

void Warlock::die() {
    std::set<Demon*>::iterator it;

    for ( it = demonList->begin(); it != demonList->end(); it++ ) {
        Demon* demon = *it;

        this->eraseDemon(demon);
        demon->die();
    }
    Unit::die();
}

void Warlock::ability(Unit* target) {
    std::set<Demon*>::iterator it;

    for( it = demonList->begin(); it != demonList->end(); demonList++ ) {
        Demon* demon = *it;

        if ( target->ifAlive() == true ) {
            demon->lightningBeat(target);
            std::cout << "Demon is attacking "<< std::endl;
        } else {
            return;
        }
    }
}
