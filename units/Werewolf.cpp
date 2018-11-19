#include "Werewolf.h"

Werewolf::Werewolf(int hp, int damage, const std::string& name) : Unit(hp, damage, name) {
    std::cout << "Werewolf construntor" << std::endl;
}

Werewolf::~Werewolf() {
    std::cout << "Werewolf destructor" << std::endl;
}

// void Werewolf::transformationToWolf() {
//     this->unit_state->transformationToWolf();
// }
