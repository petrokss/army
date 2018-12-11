#ifndef WARLOCK_H
#define WARLOCK_H

#include <iostream>
#include "SpellCaster.h"

class Warlock : public SpellCaster {
    public:
        Warlock(int hp, int mana, int damage, const std::string& name="Warlock");
        ~Warlock();
        
};

#endif // WARLOCK_H