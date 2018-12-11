#ifndef NECROMANCER_H
#define NECROMANCER_H

#include <iostream>
#include "SpellCaster.h"

class Necromancer : public SpellCaster {
    public:
        Necromancer(int hp, int mana, int damage, const std::string& name="Necromancer");
        ~Necromancer();
        
};

#endif // NECROMANCER_H