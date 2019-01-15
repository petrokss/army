#include <iostream>
#include "Unit.h"
#include "../attack/WerewolfAttack.h"
#include "../attack/VampireAttack.h"

Unit::Unit(int hp, int damage, const std::string& name, UnitType type) {
    this->unit_state = new State(hp, damage, name, type);
    this->observers = new std::set<Observer*>();
    //this->unit_attack = new BaseAttack();
    std::cout << "Unit constructor(" << this->getName() << ", hp: "<< this->getHp() << ", dmg: " << this->getDamage() << ")" << std::endl;
}
//WHAT TO DELETE IN DESTRUCTOR??
Unit::~Unit() {
    std::cout << "Unit destructor(" << this->getName() << ")" << std::endl;
    delete this->unit_state;
    delete this->observers;
    //delete(this->unit_attack);
}

const int Unit::getHp() const {
    return this->unit_state->getHp();
}

const int Unit::getHpLimit() const {
    return this->unit_state->getHpLimit();
}

void Unit::addHp(int value) {
    checkIfAlive();
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
    if ( !this->unit_state->checkIfAlive() ) {
        this->notify(this->getHpLimit()/2);
        this->die();
    }
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

// void Unit::setHp(int hp) {
//     this->unit_state->setHp(hp);
// }

void Unit::die() {
    this->unit_state->die();
}

void Unit::takeDamage(int damage) {
    this->unit_state->takeDamage(damage);
    checkIfAlive();    
}

void Unit::transformToWerewolf() {
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

void Unit::attack(Unit* enemy) {
    this->unit_attack->attack(this, enemy);
}

void Unit::counterAttack(Unit* enemy) {
    this->unit_attack->counterAttack(this, enemy);        
}


void Unit::addObserver(Observer* observer) {
    this->observers->insert(observer);
}

void Unit::removeObserver(Observer* observer) {
    this->observers->erase(observer);
}

void Unit::notify(int hp) {
    std::set<Observer*>::iterator it;
    
    for ( it = observers->begin(); it != observers->end(); it++ ) {
        Observer* observer = *it;

        observer->update(hp);
        observer->removeObservable(this);
    }
}


std::ostream& operator<<(std::ostream& out, Unit& unit ){
    out << unit.getState();
    return out;
}



