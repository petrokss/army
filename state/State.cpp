#include "State.h"

State::State(int hp, int damage, const std::string& name, UnitType type) : hp(hp), hpLimit(hp), damage(damage), name(new std::string(name)), type(type), isInfected(false) {
    std::cout << "State constructor(" << *(this->name) << ")" << std::endl;
}

State::~State() {
    std::cout << "State destructor(" << *(this->name) << ")" << std::endl;
    delete(this->name);
}

const int State::getHp() const {
    return this->hp;
}

const int State::getHpLimit() const {
    return this->hpLimit;
}


const int State::getDamage() const {
    return this->damage;
}

const std::string& State::getName() const {
    return *(this->name);
}

const UnitType State::gettype() const {
    return this->type;
} 

bool State::checkIfAlive() {
    if (this->getHp() <= 0 ) {
        std::cout << this->getName() << "is dead." << std::endl;
        return false;
    }
    return true;
}

bool State::getIsInfected() const {
    return this->isInfected;
}


void State::takeDamage(int damage) {
    this->hp -= damage;
}

void State::takeMagicDamage(int points) {
    this->hp -= points;
    this->checkIfAlive();
}


void State::addHp(int value) {
    this->hp += value;
    if (this->hp > this->hpLimit ) {
        this->hp = this->hpLimit;
    }
}

void State::setHp(int value) {
    this->hp = value;
}

void State::die() {
    this->setHp(-1);
}


void State::beInfected() {
    this->isInfected = !this->isInfected;
}


std::ostream& operator<<(std::ostream& out, State& state ){
    out << state.getName();
    out << " [hp: " << state.getHp();
    out << ", dmg: " << state.getDamage();
    out << ", type: " << state.gettype();
    if ( state.getIsInfected() == false ) {
        out << ", is not infected";
    } else {
        out << ", is infected";
    }
    out << "]";
    return out;
}
