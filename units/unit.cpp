#include <iostream>
#include "Unit.h"
//NEW????
Unit::Unit(int hp, int damage, const std::string& name) {
    this->unit_state = new State(hp, damage, name);
    this->unit_attack = new BaseAttack();
    std::cout << "Unit constructor(" << this->unit_state->getName() << ")" << std::endl;
}

Unit::~Unit() {
    std::cout << "Unit destructor(" << this->unit_state->getName() << ")" << std::endl;
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

void Unit::takeDamage(int damage) {
    this->unit_state->takeDamage(damage);
}

void Unit::takeCounterAttackDamage(Unit* enemy) {
    this->hp -= enemy->unit_state->getDamage() / 2;

    if ( this->hp < 0 ) {
        this->hp = 0;
    }
}

    void Unit::attack(Unit* enemy) {
    this->unit_attack->attack(this, enemy);
}

void Unit::counterAttack(Unit* enemy) {
    if ( this->hp > 0 ) {
        enemy->takeCounterAttackDamage(this);        
    }
}

std::ostream& operator<<(std::ostream& out, Unit& unit ){
    out << unit.getState();
    return out;
}



