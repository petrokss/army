#ifndef NECROMANCERATTACK_H
#define NECROMANCERATTACK_H

#include <iostream>
#include "BaseAttack.h"
#include "../units/Unit.h"
#include "../units/Necromancer.h"

class Necromancer;

class NecromancerAttack : public BaseAttack {
    public:
        NecromancerAttack();
        virtual ~NecromancerAttack();
        
        virtual void attack(Necromancer* attacker, Unit* enemy);
};

#endif // NECROMANCERATTACK_H