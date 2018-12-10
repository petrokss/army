#ifndef MAGICSTATE_H
#define MAGICSTATE_H

#include <iostream>
#include "../exceptions.h"
#include "State.h"

class MagicState : public State {
    private:
        int mana;
        int manaLimit;
    public:
        MagicState(int hp, int damage, const std::string& name, int mana);
        ~MagicState();

        const int getMana() const;
        const int getManaLimit() const;

        void spendMana(int cost);
        void increaseMana(int cost);
              
};

std::ostream& operator<<(std::ostream& out, MagicState& magic_state );

#endif // MAGICSTATE_H