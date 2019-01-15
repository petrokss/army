#ifndef NECROMANCER_H
#define NECROMANCER_H

#include "Unit.h"
#include "../interface/Observer.h"

class Necromancer : public Unit {
    public:
        Necromancer(int hp, int damage, const std::string& name="Necromancer");
        virtual ~Necromancer();
        
};

#endif // NECROMANCER_H