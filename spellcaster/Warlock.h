#ifndef WARLOCK_H
#define WARLOCK_H

#include <iostream>
#include "SpellCaster.h"
#include "Demon.h"

class Warlock : public SpellCaster {
    private:
        Demon* demon;
    public:
        Warlock(int hp, int mana, int damage, const std::string& name="Warlock");
        ~Warlock();
        
        Demon* createDemon();

        //virtual void ability(Unit* target);
};

#endif // WARLOCK_H