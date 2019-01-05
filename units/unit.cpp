#include <iostream>
#include "Unit.h"

Unit::Unit(int hp, int damage, const std::string& name, UnitType type) {
    this->unit_state = new State(hp, damage, name, type);
    //this->unit_attack = new BaseAttack();
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

const int Unit::getHpLimit() const {
    return this->unit_state->getHpLimit();
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

bool Unit::getIsInfected() const {
    return this->unit_state->getIsInfected();
}

const UnitType Unit::gettype() const {
    return this->unit_state->gettype();
}


void Unit::beInfected() {
    return this->unit_state->beInfected();
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



