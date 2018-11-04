#ifndef WEREWOLFATTACK_H
#define WEREWOLFATTACK_H

#include <iostream>
#include "BaseAttack.h"
#include "../units/Unit.h"

class WerewolfAttack : public BaseAttack {
    public:
        WerewolfAttack();
        virtual ~WerewolfAttack();
        
        virtual void attack(Unit* attacker, Unit* enemy);
};

#endif // WEREWOLFATTACK_H