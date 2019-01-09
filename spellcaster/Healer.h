#ifndef HEALER_H
#define HEALER_H

#include <iostream>
#include "SpellCaster.h"
#include "../spell/Spell.h"
#include "../spell/Fireball.h"
#include "../spell/Heal.h"

class Healer : public SpellCaster {
    public:
        Healer(int hp, int mana, int damage, const std::string& name="Healer");
        ~Healer();
        
};

#endif // HEALER_H