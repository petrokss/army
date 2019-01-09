#ifndef MAGICATTACK_H
#define MAGICATTACK_H

#include <iostream>
#include "../units/Unit.h"
#include "../spell/Spell.h"
#include "../spellcaster/SpellCaster.h"

class SpellCaster;

class MagicAttack : public BaseAttack {
    public:
        MagicAttack();
        virtual ~MagicAttack();
        
        virtual void cast(SpellCaster* attacker, Unit* target, spellNames spellName);
};

#endif // MAGICATTACK_H