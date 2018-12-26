#ifndef FIREBALL_H
#define FIREBALL_H

#include "Spell.h"

class Fireball : public Spell {
    public:
        Fireball(int cost=30, int points=30);
        ~Fireball();

        void action(Unit* target);
};

#endif // FIREBALL_H