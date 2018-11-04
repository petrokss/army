#ifndef VAMPIREATTACK_H
#define VAMPIREATTACK_H

#include <iostream>
#include "BaseAttack.h"
#include "../units/Unit.h"

class VampireAttack : public BaseAttack {
    public:
        VampireAttack();
        virtual ~VampireAttack();
        
        virtual void attack(Unit* attacker, Unit* enemy);
};

#endif // VAMPIREATTACK_H