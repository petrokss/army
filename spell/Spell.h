#ifndef SPELL_H
#define SPELL_H

#include "../units/Unit.h"

enum spellNames {
    fireball = 1,
    heal
};

class Spell {
    protected: 
        int cost;
        int points;
    public:
        Spell(int cost, int points);
        virtual ~Spell();

        int getCost() const;
        int getPoint() const;
        //bool ifManaNeeded(int amount);

        virtual void action(Unit* target) = 0;
};

#endif // SPELL_H