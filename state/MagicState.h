#ifndef MAGICSTATE_H
#define MAGICSTATE_H

#include <iostream>
#include "../exceptions.h"

class MagicState {
    private:
        int mana;
        int manaLimit;
    public:
        MagicState(int mana,
                    int manaLimit);
        ~MagicState();

        const int getMana() const;
        const int getManaLimit() const;

        void spendMana(int cost);
        void increaseMana(int mana);
              
};

std::ostream& operator<<(std::ostream& out, MagicState& magic_state );

#endif // MAGICSTATE_H