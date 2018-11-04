#include <iostream>
#include "Soldier.h"

Soldier::Soldier(const std::string& name) : Unit(100, 20, name, new BaseAttack()) {
    std::cout << "Soldier constructor(" << name << ")" << std::endl;
}

Soldier::~Soldier(){
    std::cout << "Soldier destruntor" << std::endl;
}