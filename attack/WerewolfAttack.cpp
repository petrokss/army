#include "WerewolfAttack.h"

WerewolfAttack::WerewolfAttack() {
    std::cout << "WerewolfAttack constructor" << std::endl;
}
WerewolfAttack::~WerewolfAttack() {
    std::cout << "VampireAttack destructor" << std::endl;
}

void WerewolfAttack::attack(Unit* attacker, Unit* enemy) {
    if ( enemy->getHp() > 0 ) {
        enemy->takeDamage(attacker->getDamage());
        enemy->counterAttack(attacker);
    }
}

//add enemy's transformation into a werewolf 
void WerewolfAttack::bite(Werewolf* attacker, Unit* enemy) {
    if ( enemy->getIsInfected() ) {
        enemy->beInfected();
    }
}
 