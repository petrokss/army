#include "BerserkerAttack.h"

BerserkerAttack::BerserkerAttack() {
    std::cout << "BerserkerAttack constructor" << std::endl;
}
BerserkerAttack::~BerserkerAttack() {
    std::cout << "BerserkerAttack destructor" << std::endl;
}
//MAGIC DOESN'T AFFECT HIM-
void BerserkerAttack::attack(Unit* attacker, Unit* enemy) {
    if ( enemy->getHp() > 0 ) {
        enemy->takeDamage(attacker->getDamage());
        enemy->counterAttack(attacker);
    }
}