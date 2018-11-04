#ifndef ROGUEATTACK_H
#define ROGUEATTACK_H

#include <iostream>
#include "BaseAttack.h"
#include "../units/Unit.h"

class RogueAttack : public BaseAttack {
    public:
        RogueAttack();
        virtual ~RogueAttack();
        
        virtual void attack(Unit* attacker, Unit* enemy);
};

#endif // ROGUEATTACK_H
