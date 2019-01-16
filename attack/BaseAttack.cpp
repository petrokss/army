#include "BaseAttack.h"

BaseAttack::BaseAttack() {
    std::cout << "Baseattack construntor" << std::endl;
}

BaseAttack::~BaseAttack() {
    std::cout << "Baseattak destruntor" << std::endl;
}

void BaseAttack::attack(Unit* attacker, Unit* enemy) {
    if ( enemy->getHp() > 0 ) {
        enemy->takeDamage(attacker->getDamage());
        if ( attacker->getHp() > 0 ) {
            enemy->counterAttack(attacker);
        }
    }
    std::cout << "Base---Attack" << std::endl;
}

void BaseAttack::counterAttack(Unit* attacker, Unit* enemy) {
    if ( enemy->getHp() > 0 ) {
        enemy->takeDamage(attacker->getDamage() / 2);
    }
}

void BaseAttack::ability(Unit* attacker, Unit* enemy) {}

