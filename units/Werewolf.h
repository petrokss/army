#ifndef WEREWOLF_H
#define WEREWOLF_H

#include "Unit.h"
//can transform into wolf(more hp and damage than werewolf, but has bigger damage from spellcaster)
class Werewolf : public Unit {
    public:
        Werewolf( const std::string& name="Werewolf");
        virtual ~Werewolf();

};

#endif //WEREWOLF_H