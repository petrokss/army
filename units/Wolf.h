#ifndef WOLF_H
#define WOLF_H

#include "Unit.h"
#include "Werewolf.h"

//more hp and damage than werewolf, but has bigger damage from spellcaster
class Wolf : public Werewolf {
    public:
        Wolf(int hp, int damage, const std::string& name="Wolf");
        virtual ~Wolf();
        //void transformationToWolf(this);

};

#endif //WOLF_H