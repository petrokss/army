#include "Rouge.h"

Rouge::Rouge(int hp, int damage, const std::string& name) : Unit(hp, damage, name, USUAL) {
    this->unit_attack = new RougeAttack();
    std::cout << "Rouge construntor" << std::endl;
}
Rouge::~Rouge() {
    std::cout << "Rouge destruntor" << std::endl;
}