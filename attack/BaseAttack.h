#ifndef BASEATTAK_H
#define BASEATTAK_H

#include <iostream>
#include "../units/Unit.h"

class Unit;

class BaseAttack {
    BaseAttack();
    ~BaseAttack();

    void attack(Unit* attacker, Unit* enemy);

};

#endif //BASEATTAK_H