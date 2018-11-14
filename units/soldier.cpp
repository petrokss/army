#include <iostream>
#include "Soldier.h"

Soldier::Soldier(int hp, int damage, const std::string& name) : Unit(hp, damage, name)  {
    std::cout << "Soldier constructor(" << name << ")" << std::endl;
}

Soldier::~Soldier(){
    std::cout << "Soldier destructor" << std::endl;
}