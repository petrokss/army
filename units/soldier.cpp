#include <iostream>
#include "Soldier.h"

Soldier::Soldier(int hp, int damage, const std::string& name) : Unit(hp, damage, name, USUAL)  {
    this->unit_attack = new BaseAttack();
    std::cout << "Soldier constructor(" << name << ")" << std::endl;
}

Soldier::~Soldier(){
    delete this->unit_attack;
    std::cout << "Soldier destructor" << std::endl;
}