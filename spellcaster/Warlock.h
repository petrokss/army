#ifndef WARLOCK_H
#define WARLOCK_H

#include <iostream>
#include "SpellCaster.h"
#include "Demon.h"
#include <set>

// class Demon;

class Warlock : public SpellCaster {
    private:
        std::set<Demon*>* demonList;
    public:
        Warlock(int hp, int mana, int damage, const std::string& name="Warlock");
        ~Warlock();
        
        void createDemon();

        virtual void ability(Unit* target);
};

#endif // WARLOCK_H