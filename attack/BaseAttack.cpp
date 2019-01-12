#include "BaseAttack.h"

BaseAttack::BaseAttack() {
    std::cout << "Baseattack construntor" << std::endl;
}

BaseAttack::~BaseAttack() {
    std::cout << "Baseattak destruntor" << std::endl;
}

void BaseAttack::attack(Unit* attacker, Unit* enemy) {
    if ( enemy->getHp() > 0 ) {
        enemy->takeDamage(attacker->getDamage());
        std::cout << "after attack: [attacker: "<< attacker->getName() << ", hp: " << attacker->getHp() << ", dmg: " << attacker->getDamage() << std::endl;
        std::cout << "after attack: [enemy: "<< enemy->getName() << ", hp: " << enemy->getHp() << ", dmg: " << enemy->getDamage() << std::endl;
        enemy->counterAttack(attacker);
        std::cout << "after counterattack: [attacker: "<< attacker->getName() << ", hp: " << attacker->getHp() << ", dmg: " << attacker->getDamage() << std::endl;
        std::cout << "after counterattack: [enemy: "<< enemy->getName() << ", hp: " << enemy->getHp() << ", dmg: " << enemy->getDamage() << std::endl;
    }
    std::cout << "Base---Attack" << std::endl;
}

void BaseAttack::counterAttack(Unit* attacker, Unit* enemy) {
    if ( enemy->getHp() > 0 ) {
        enemy->takeDamage(attacker->getDamage() / 2);
    }
}

void BaseAttack::ability(Unit* attacker, Unit* enemy) {}

