#include "RougeAttack.h"

RougeAttack::RougeAttack() {
    std::cout << "RogueAttack constructor" << std::endl;
}
RougeAttack::~RougeAttack() {
    std::cout << "RogueAttack destructor" << std::endl;
}
//rogue can't be counterattacked
void RougeAttack::attack(Rouge* attacker, Unit* enemy) {
    if ( enemy->getHp() > 0 ) {
        enemy->takeDamage(attacker->getDamage());
    }
    std::cout << "Rogue---Attack" << std::endl;
}