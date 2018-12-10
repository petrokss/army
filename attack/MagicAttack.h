#ifndef MAGICATTACK_H
#define MAGICATTACK_H

#include <iostream>
#include "../units/Unit.h"

class Unit;


class MagicAttack {
    public:
        MagicAttack();
        virtual ~MagicAttack();
        
        void action(Unit* target);
};

#endif // MAGICATTACK_H