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
        enemy->takeDamage(attacker->getHp());
        attacker->addHp(enemy->getHp() / 4);
        enemy->counterAttack(attacker);
        attacker->addHp(enemy->getHp() / 4);
    }
    std::cout << "----Vampire----attack----" << std::endl;
}

void VampireAttack::bite(Unit* attacker, Unit* enemy) {
    if ( enemy->gettype() == WEREWOLF || enemy->gettype() == VAMPIRE ) {
        std::cout << "You can't bite Werewolf or Vampire " << std::endl;
    } else if ( enemy->getIsInfected() == true ) {
        std::cout << "You can't bite, the unit is infected" << std::endl;
    } else {
        if ( enemy->getIsInfected() == false ) {
            enemy->beInfected();
        }
        enemy->transformToVampire();
    }
}
