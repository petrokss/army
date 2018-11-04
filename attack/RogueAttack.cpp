#include "RogueAttack.h"

RogueAttack::RogueAttack() {
    std::cout << "RogueAttack constructor" << std::endl;
}
RogueAttack::~RogueAttack() {
    std::cout << "RogueAttack destructor" << std::endl;
}

void RogueAttack::attack(Unit* attacker, Unit* enemy) {
    if ( enemy->getHp() > 0 ) {
        enemy->takeDamage(attacker);
    }
}