#ifndef HEALER_H
#define HEALER_H

#include <iostream>
#include "SpellCaster.h"

class Healer : public SpellCaster {
    public:
        Healer(int hp, int mana, int damage, const std::string& name="Healer");
        ~Healer();
        
};

#endif // HEALER_H