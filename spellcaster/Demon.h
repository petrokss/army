#ifndef DEMON_H
#define DEMON_H

#include <iostream>
#include "../units/Unit.h"
#include "../units/Soldier.h"
#include "SpellCaster.h"

//public soldier? What demon does?
class Demon : public Soldier {
    public:
        Demon(int hp, int damage, const std::string& name="Demon");
        ~Demon();
        
        void lightningBeat(Unit* target);
};

#endif // DEMON_H