#include "Baseattack.h"

Baseattack::BaseAttack() {
    std::cout << "Baseattack construntor" << std::endl;
}
Baseattack::~BaseAttack() {
    std::cout << "Baseattak destruntor" << std::endl;

}

void Baseattack::attack(Unit* enemy) {
    if ( enemy->getHp() > 0 ) {
        enemy->takeDamage(this);
        enemy->counterAttack(this);
    }
}

void Baseattack::attack(Unit* attacker, Unit* enemy);