#include <iostream>
#include "Unit.h"

Unit::Unit(int hp, int damage, const std::string& name, BaseAttack* unit_attack) : hp(hp), damage(damage), name(new std::string(name)), unit_attack(unit_attack) {
    std::cout << "Unit constructor(" << *(this->name) << ")" << std::endl;
}

Unit::~Unit() {
    std::cout << "Unit destructor(" << *(this->name) << ")" << std::endl;
    delete(this->name);
    delete(this->unit_attack);
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



