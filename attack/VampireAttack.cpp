#include "VampireAttack.h"

VampireAttack::VampireAttack() {
    std::cout << "VampireAttack constructor" << std::endl;
}
VampireAttack::~VampireAttack() {
    std::cout << "VampireAttack destructor" << std::endl;
}
//after attack/counterattack gets some hp from enemy+
void VampireAttack::attack(Unit* attacker, Unit* enemy) {
    if ( enemy->getHp() > 0 ) {
        enemy->takeDamage(attacker);
        attacker->addHp(enemy->getHp() / 4);
        enemy->counterAttack(attacker);
        attacker->addHp(enemy->getHp() / 4);
    }
}