#include "VampireAttack.h"

VampireAttack::VampireAttack() {
    std::cout << "VampireAttack constructor" << std::endl;
}
VampireAttack::~VampireAttack() {
    std::cout << "VampireAttack destructor" << std::endl;
}

void VampireAttack::attack(Unit* attacker, Unit* enemy) {
    if ( enemy->getHp() > 0 ) {
        enemy->takeDamage(attacker->getDamage());
        attacker->addHp(enemy->getHpLimit() / 4);
        enemy->counterAttack(attacker);
        attacker->addHp(enemy->getHpLimit() / 4);
    }
    std::cout << "----Vampire----attack----" << std::endl;
}

void VampireAttack::ability(Unit* attacker, Unit* enemy) {
    if ( enemy->gettype() == WEREWOLF || enemy->gettype() == VAMPIRE ) {
        std::cout << "You can't bite Werewolf or Vampire " << std::endl;
    } else if ( enemy->getIsInfected() == true ) {
        std::cout << "You can't bite, the unit is infected" << std::endl;
    } else {
        enemy->beInfected();
        enemy->transformToVampire();
    }
}
