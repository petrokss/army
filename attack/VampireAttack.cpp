#include "VampireAttack.h"

VampireAttack::VampireAttack() {
    std::cout << "VampireAttack constructor" << std::endl;
}
VampireAttack::~VampireAttack() {
    std::cout << "VampireAttack destructor" << std::endl;
}
//after attack/counterattack gets some hp from enemy
void VampireAttack::attack(Unit* attacker, Unit* enemy) {
    if ( enemy->getHp() > 0 ) {
        int enemyHpToVampire = 0;

        enemy->takeDamage(attacker);
        enemyHpToVampire = enemy->getHp() / 4 + attacker->getHp();
        attacker->setHp(enemyHpToVampire);
        enemy->counterAttack(attacker);
        enemyHpToVampire = enemy->getHp() / 4 + attacker->getHp();
        attacker->setHp(enemyHpToVampire);
    }
}