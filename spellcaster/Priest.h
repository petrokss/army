#ifndef PRIEST_H
#define PRIEST_H

#include <iostream>
#include "SpellCaster.h"

class Priest : public SpellCaster {
    public:
        Priest(int hp, int mana, int damage, const std::string& name="Priest");
        ~Priest();
        
};

#endif // PRIEST_H