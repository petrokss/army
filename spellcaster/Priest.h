#ifndef PRIEST_H
#define PRIEST_H

#include <iostream>
#include "SpellCaster.h"
#include "../spell/Spell.h"
#include "../spell/Fireball.h"
#include "../spell/Heal.h"
#include "../attack/PriestAttack.h"

class PriestAttack;

class Priest : public SpellCaster {
    private:
        PriestAttack* priest_attack;
    public:
        Priest(int hp, int mana, int damage, const std::string& name="Priest");
        ~Priest();

        void attack(Unit* enemy);
        void cast(Unit* target, spellNames spellName);

        
};

#endif // PRIEST_H