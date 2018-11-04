#include "BaseAttack.h"

BaseAttack::BaseAttack() {
    std::cout << "Baseattack construntor" << std::endl;
}

BaseAttack::~BaseAttack() {
    std::cout << "Baseattak destruntor" << std::endl;
}

void BaseAttack::attack(Unit* attacker, Unit* enemy) {
    if ( enemy->getHp() > 0 ) {
        enemy->takeDamage(attacker);
        enemy->counterAttack(attacker);
    }
}
