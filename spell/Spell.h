#ifndef SPELL_H
#define SPELL_H

#include "../units/Unit.h"

class Spell {
    private: 
        int cost;
        int points;
    public:
        Spell(int cost, int points);
        virtual ~Spell();

        int getCost() const;
        int getPoint() const;

        virtual void action(Unit* target) = 0;
};

#endif // SPELL_H