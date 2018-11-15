#ifndef WEREWOLF_H
#define WEREWOLF_H

#include "Unit.h"
//can transform into wolf(more hp and damage than werewolf, but has bigger damage from spellcaster)
class Werewolf : public Unit {
    public:
        Werewolf(int hp, int damage, const std::string& name="Werewolf");
        virtual ~Werewolf();
        //void transformationToWolf(this);

};

#endif //WEREWOLF_H