#ifndef ROUGEATTACK_H
#define ROUGEATTACK_H

#include <iostream>
#include "BaseAttack.h"
#include "../units/Unit.h"
#include "../units/Rouge.h"

class Rouge;

class RougeAttack : public BaseAttack {
    public:
        RougeAttack();
        virtual ~RougeAttack();
        
        virtual void attack(Rouge* attacker, Unit* enemy);
};

#endif // ROUGEATTACK_H
