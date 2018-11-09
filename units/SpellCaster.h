#ifndef SPELLCASTER_H
#define SPELLCASTER_H

#include <iostream>
#include "Unit.h"
#include "../attack/MagicAttack.h"


class MagicAttack;


class SpellCaster : public Unit {
    private: //constructor????
        int mana;
        MagicAttack* magic_attack;
        
    public:
        
        SpellCaster();
        ~SpellCaster();
        
};

//std::ostream& operator<<(std::ostream& out, SpellCaster& spellcaster );

#endif // SPELLCASTER_H