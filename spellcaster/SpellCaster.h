#ifndef SPELLCASTER_H
#define SPELLCASTER_H

#include <iostream>
#include "../units/Unit.h"
#include "../attack/MagicAttack.h"
#include "../state/MagicState.h"



class MagicAttack;


class SpellCaster : public Unit {
    private:
        int mana;
        MagicAttack* magic_attack;
        MagicState* magic_state;
    public:
        SpellCaster(int hp, int mana, int damage, const std::string& name);
        ~SpellCaster();

        const int getMana() const;
        const int getManaLimit() const;
        MagicState& getMagicState() const;

        void spendMana(int cost);
        void increaseMana(int cost);
        
};

//std::ostream& operator<<(std::ostream& out, SpellCaster& spellcaster );

#endif // SPELLCASTER_H