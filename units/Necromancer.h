#ifndef NECROMANCER_H
#define NECROMANCER_H

#include <iostream>
#include "Unit.h"

class Necromancer : public Unit {
    public:
        Necromancer(int hp, int mana, int damage, const std::string& name="Necromancer");
        ~Necromancer();
        
};

#endif // NECROMANCER_H