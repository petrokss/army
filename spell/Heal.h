#ifndef HEAL_H
#define HEAL_H

#include "Spell.h"

class Heal : public Spell {
    public:
        Heal(int cost=30, int points=50);
        virtual ~Heal();

        virtual void action(Unit* target);
};

#endif // HEAL_H