#include <iostream>
#include "Unit.h"

Unit::Unit(int hp, int damage, const std::string& name) {
    this->unit_state = new State(hp, damage, name);
    this->unit_attack = new BaseAttack();
    std::cout << "Unit constructor(" << this->getName() << ", hp: "<< this->getHp() << ", dmg: " << this->getDamage() << ")" << std::endl;
}
//WHAT TO DELETE IN DESTRUCTOR??
Unit::~Unit() {
    std::cout << "Unit destructor(" << this->getName() << ")" << std::endl;
    //delete(this->name);
    //delete(this->unit_attack);
}

const int Unit::getHp() const {
    return this->unit_state->getHp();
}

void Unit::addHp(int value) {
    this->unit_state->addHp(value);
}

const int Unit::getDamage() const {
    return this->unit_state->getDamage();
}

const std::string& Unit::getName() const {
    return this->unit_state->getName();
}

State& Unit::getState() const {
    return *(this->unit_state);
}

void Unit::checkIfAlive() {
    this->unit_state->checkIfAlive();
}

void Unit::takeDamage(int damage) {
    this->unit_state->takeDamage(damage);
    checkIfAlive();    
}

// void Unit::takeCounterAttackDamage(int damage) {
//     this->unit_state->takeDamage(damage / 2 );
//     checkIfAlive();
// }

void Unit::attack(Unit* enemy) {
    this->unit_attack->attack(this, enemy);
}

void Unit::counterAttack(Unit* enemy) {
    this->unit_attack->counterAttack(this, enemy);        
}

std::ostream& operator<<(std::ostream& out, Unit& unit ){
    out << unit.getState();
    return out;
}



