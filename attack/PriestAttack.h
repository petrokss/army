#ifndef PRIESTATTACK_H
#define PRIESTATTACK_H

#include <iostream>
#include "../units/Unit.h"
#include "../spell/Spell.h"
#include "../spellcaster/SpellCaster.h"

class Priest;

class PriestAttack : public MagicAttack {
    public:
        PriestAttack();
        virtual ~PriestAttack();
        
        virtual void attack(Unit* attacker, Unit* enemy);
        virtual void cast(SpellCaster* attacker, Unit* target, spellNames spellName);
};

#endif // PRIESTATTACK_H