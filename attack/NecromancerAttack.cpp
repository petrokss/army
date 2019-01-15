#include "NecromancerAttack.h"

NecromancerAttack::NecromancerAttack() {
    std::cout << "NecromancerAttack constructor" << std::endl;

}

NecromancerAttack::~NecromancerAttack() {
    std::cout << "NecromancerAttack destructor" << std::endl;
}


void NecromancerAttack::attack(Necromancer* attacker, Unit* enemy) {
    if ( enemy->getHp() > 0 ) {
        enemy->addObserver(attacker);
        attacker->addObservable(enemy);
        enemy->takeDamage(attacker->getDamage());
        enemy->counterAttack(attacker);
    }
    std::cout << "Necro---Attack" << std::endl;
}
