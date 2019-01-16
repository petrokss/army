#include "Werewolf.h"

Werewolf::Werewolf(int hp, int damage, const std::string& name) : Unit(hp, damage, name, WEREWOLF) {
    this->unit_attack = new WerewolfAttack();
    this->wolf_state = NULL;
    this->human_state = this->unit_state;
    std::cout << "Werewolf construntor" << std::endl;
}

Werewolf::~Werewolf() {
    std::cout << "Werewolf destructor" << std::endl;
}

State& Werewolf::getHumanState() const {
    return *(this->human_state);
}
State& Werewolf::getWolfState() const {
    return *(this->wolf_state);
}

void Werewolf::turnIntoWolf() {
    this->unit_attack = new WerewolfAttack();
    if ( this->wolf_state == NULL ) {
        this->wolf_state = new State(this->getHpLimit()+20, this->getDamage()+20, "Wolf", WEREWOLF);
    }
    if ( this->getDamage() < this->wolf_state->getDamage() ) {
        this->human_state = this->unit_state;
        this->unit_state = this->wolf_state;
    } else {
        std::cout << "You're a wolf now" << std::endl;
    }
}

void Werewolf::turnIntoWerewolf() {
    if ( this->getDamage() > this->human_state->getDamage() ) {
        this->wolf_state = this->unit_state;
        this->unit_state = this->human_state;
    } else {
        std::cout << "You're a Werewolf now" << std::endl;
    }
}

void Werewolf::ability(Unit* enemy){
    this->unit_attack->ability(this, enemy);
}

