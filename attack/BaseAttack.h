#ifndef BASEATTACK_H
#define BASEATTACK_H

#include <iostream>
#include "../units/Unit.h"

class Unit;

class BaseAttack {
    public:
        BaseAttack();
        virtual ~BaseAttack();
        
        virtual void attack(Unit* attacker, Unit* enemy);
        virtual void counterAttack(Unit* attacker, Unit* enemy);

        virtual void ability(Unit* enemy);
};

#endif // BASEATTACK_H