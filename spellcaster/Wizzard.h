#ifndef WIZZARD_H
#define WIZZARD_H

#include <iostream>
#include "SpellCaster.h"
#include "../spell/Spell.h"
#include "../spell/Fireball.h"
#include "../spell/Heal.h"

class Wizzard : public SpellCaster {
    public:
        Wizzard(int hp, int mana, int damage, const std::string& name="Wizzard");
        ~Wizzard();
};

#endif // WIZZARD_H