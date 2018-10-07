#include <iostream>
#include "Unit.h"

Unit::Unit(int hp, int damage, const std::string& name) {
    this->hp = hp;
    this->damage = damage;
    this->name = name;
    std::cout << "unit construntor: (" << this->name << ")"<< std::endl;
}
Unit::~Unit() {
    std::cout << "unit destruntor: (" << *(this->name) << ")"<< std::endl;
    delete (this->name);
}

const int Unit::getHp() const {
    return this->hp;
}
const int Unit::getDamage() const {
    return this->damage;
}
const std::string& Unit::getName() const {
    return *(this->name);
}

void Unit::takeDamage(Unit* enemy) {
    this->hp -= enemy->getDamage();

    if ( this->hp < 0 ) {
        this->hp = 0;
    }

}

void Unit::takeCounterAttackDamage(Unit* enemy) {
    this->hp -= enemy->getDamage() / 2;

    if ( this->hp < 0 ) {
        this->hp = 0;
    }
}

void Unit::attack(Unit* enemy) {
    if ( this->hp > 0 ) {
        enemy->takeDamage(this);
        enemy->counterAttack(this);
    }
}

void Unit::counterAttack(Unit* enemy) {
    if ( this->hp > 0 ) {
        enemy->takeCounterAttackDamage(this);        
    }
}

std::ostream& operator<<(std::ostream& out, Unit& unit ){
    out << "name: " << unit.getName();
    out << ", hp: " << unit.getHp();
    out << ", damage: " << unit.getDamage();
    return out;
}



