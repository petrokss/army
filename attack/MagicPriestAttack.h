#ifndef MAGICPRIESTATTACK_H
#define MAGICPRIESTATTACK_H

#include <iostream>
#include "../units/Unit.h"
#include "../spell/Spell.h"
#include "../spellcaster/SpellCaster.h"
#include "MagicAttack.h"

class SpellCaster;

class MagicPriestAttack : public MagicAttack {
    public:
        MagicPriestAttack();
        virtual ~MagicPriestAttack();
        
        virtual void cast(SpellCaster* attacker, Unit* target, spellNames spellName);
};

#endif // MAGICPRIESTATTACK_H