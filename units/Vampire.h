#ifndef VAMPIRE_H
#define VAMPIRE_H

#include "Unit.h"
#include "../attack/VampireAttack.h"

class VampireAttack;

class Vampire : public Unit {
    private:
        VampireAttack* vampire_attack;
    public:
        Vampire(int hp, int damage, const std::string& name="Vampire");
        virtual ~Vampire();

        void ability(Unit* target);
};

#endif //VAMPIRE_H