#ifndef BERSERKERATTACK_H
#define BERSERKERATTACK_H

#include <iostream>
#include "BaseAttack.h"
#include "../units/Unit.h"

class BerserkerAttack : public BaseAttack {
    public:
        BerserkerAttack();
        virtual ~BerserkerAttack();
        
        virtual void attack(Unit* attacker, Unit* enemy);
};

#endif // BERSERKERATTACK_H