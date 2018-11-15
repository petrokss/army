#ifndef VAMPIRE_H
#define VAMPIRE_H

#include "Unit.h"

class Vampire : public Unit {
    public:
        Vampire(int hp, int damage, const std::string& name="Vampire");
        virtual ~Vampire();

};

#endif //VAMPIRE_H