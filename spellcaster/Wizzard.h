#ifndef WIZZARD_H
#define WIZZARD_H

#include <iostream>
#include "SpellCaster.h"

class Wizzard : public SpellCaster {
    public:
        Wizzard(int hp, int mana, int damage, const std::string& name="Wizzard");
        ~Wizzard();
        
};

#endif // WIZZARD_H