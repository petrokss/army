#include "Werewolf.h"

Werewolf::Werewolf(const std::string& name) : Unit(70, 10, name, new BaseAttack()) {
    std::cout << "Werewolf construntor" << std::endl;
}

Werewolf::~Werewolf() {
    std::cout << "Werewolf destructor" << std::endl;
}