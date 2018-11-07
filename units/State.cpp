#include "State.h"

State::State(int hp, int damage, const std::string& name) : hp(hp), damage(damage), name(new std::string(name)) {
    std::cout << "State constructor(" << *(this->name) << ")" << std::endl;
}

State::~State() {
    std::cout << "State destructor(" << *(this->name) << ")" << std::endl;
    delete(this->name);
}

const int State::getHp() const {
    return this->hp;
}

const int State::getDamage() const {
    return this->damage;
}

const std::string& State::getName() const {
    return *(this->name);
}
//WHAT TO DO IF UNIT IS DEAD?
void State::checkIfAlive() {
    if (this->getHp() <= 0 ) {
        std::cout << this->getName() << "is dead." << std::endl;
        //this->~State();
    }
}

void State::takeDamage(State* enemy) {
    this->hp -= enemy->getDamage();

    this->checkIfAlive();
}

void State::addHp(int value) {
    this->hp += value;
}

