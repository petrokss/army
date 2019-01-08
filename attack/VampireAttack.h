#ifndef VAMPIREATTACK_H
#define VAMPIREATTACK_H

#include <iostream>
#include "BaseAttack.h"
#include "../units/Unit.h"
#include "../units/Vampire.h"

class Unit;

class VampireAttack : public BaseAttack {
    public:
        VampireAttack();
        virtual ~VampireAttack();
        
        virtual void attack(Unit* attacker, Unit* enemy);
        void bite(Unit* attacker, Unit* enemy);
};

#endif // VAMPIREATTACK_H