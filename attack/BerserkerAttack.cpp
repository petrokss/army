#include "BerserkerAttack.h"

BerserkerAttack::BerserkerAttack() {
    std::cout << "BerserkerAttack constructor" << std::endl;
}
BerserkerAttack::~BerserkerAttack() {
    std::cout << "BerserkerAttack destructor" << std::endl;
}
//НА НЕГО НЕ ДЕЙСТВУЕТ МАГИЯ ADD THIS 
void BerserkerAttack::attack(Unit* attacker, Unit* enemy) {
    if ( enemy->getHp() > 0 ) {
        enemy->takeDamage(attacker);
        enemy->counterAttack(attacker);
    }
}