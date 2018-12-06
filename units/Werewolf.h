#ifndef WEREWOLF_H
#define WEREWOLF_H

#include "Unit.h"
//can transform into wolf(more hp and damage than werewolf, but has bigger damage from spellcaster)
class Werewolf : public Unit {
    private:
        State* wolf_state;
        State* human_state;
    public:
        Werewolf(int hp, int damage, const std::string& name="Werewolf");
        virtual ~Werewolf();

        State& getHumanState() const;
        State& getWolfState() const;

        void turnIntoWolf();
        void turnIntoWerewolf();

};

#endif //WEREWOLF_H