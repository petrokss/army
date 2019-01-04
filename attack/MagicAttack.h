#ifndef MAGICATTACK_H
#define MAGICATTACK_H

#include <iostream>
#include "../units/Unit.h"
#include "../spell/Spell.h"
#include "../spellcaster/SpellCaster.h"


class MagicAttack : public BaseAttack {
    public:
        MagicAttack();
        virtual ~MagicAttack();
        
        void cast(SpellCaster* attacker, Unit* target, spellNames spellName, Spell* spell);
};

#endif // MAGICATTACK_H