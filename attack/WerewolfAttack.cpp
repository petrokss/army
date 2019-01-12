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
void WerewolfAttack::ability(Unit* attacker, Unit* enemy) {
    if ( enemy->gettype() == WEREWOLF || enemy->gettype() == VAMPIRE ) {
        std::cout << "You can't bite Werewolf or Vampire " << std::endl;
    } else if ( enemy->getIsInfected() == true ) {
        std::cout << "You can't bite, the unit is infected" << std::endl;
    } else {
        if ( enemy->getIsInfected() == false ) {
            enemy->beInfected();
        }
        enemy->transformToWerewolf();
    }
}
 