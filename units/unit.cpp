#include <iostream>
#include "Unit.h"
#include "../attack/WerewolfAttack.h"
#include "../attack/VampireAttack.h"

Unit::Unit(int hp, int damage, const std::string& name, UnitType type) {
    this->unit_state = new State(hp, damage, name, type);
    std::set<Unit*>* observers = new std::set<Unit*>();
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

void Unit::transformToWerewolf() {
    //delete this->unit_state;
    delete this->unit_attack;
    this->unit_attack = new WerewolfAttack();
}

void Unit::transformToVampire() {
    delete this->unit_attack;
    this->unit_attack = new VampireAttack();
}

void Unit::ability(Unit* enemy) {
    this->unit_attack->ability(this, enemy);
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


void Unit::addObserver(Unit* observer) {
    this->observers->insert(observer);
}

void Unit::removeObserver(Unit* observer) {
    this->observers->erase(observer);
}

void Unit::notify() {
    std::set<Unit*>::iterator it;
    
    for ( it = observers->begin(); it != observers->end(); it++ ) {
        // it->addHp(this->getHp() / 4);
        it->addHp(20);
    }
}


std::ostream& operator<<(std::ostream& out, Unit& unit ){
    out << unit.getState();
    return out;
}



