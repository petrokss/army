#include <iostream>
#include "Soldier.h"

Soldier::Soldier(const std::string& name) : Unit(100, 20, name){
    std::cout << "Soldier construntor" << std::endl;
}
Soldier::~Soldier(){
    std::cout << "Soldier destruntor" << std::endl;
}