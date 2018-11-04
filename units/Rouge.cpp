#include "Rouge.h"

Rouge::Rouge(const std::string& name) : Unit(85, 15, name, new BaseAttack()) {
    std::cout << "Rouge construntor" << std::endl;

}
Rouge::~Rouge() {
    std::cout << "Rouge destruntor" << std::endl;
}