#include <iostream>
#include "Unit.h"
//NEW????
Unit::Unit(State* unit_state, BaseAttack* unit_attack) : unit_state(unit_state), unit_attack(unit_attack) {
    std::cout << "Unit constructor(" << *(this->name) << ")" << std::endl;
}

Unit::~Unit() {
    std::cout << "Unit destructor(" << *(this->name) << ")" << std::endl;
    delete(this->name);
    delete(this->unit_attack);
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

void Unit::takeDamage(Unit* enemy) {
    this->unit_state->takeDamage(enemy->unit_state);
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
    out << unit.getName();
    out << " [hp: " << unit.getHp();
    out << ", dmg: " << unit.getDamage();
    out << "]";
    return out;
}



