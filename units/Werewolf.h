#ifndef WEREWOLF_H
#define WEREWOLF_H

#include "Unit.h"
#include "../attack/WerewolfAttack.h"

class WerewolfAttack;

//can transform into wolf(more hp and damage than werewolf, but has bigger damage from spellcaster)
class Werewolf : public Unit {
    private:
        State* wolf_state;
        State* human_state;
        //WerewolfAttack* werewolf_attack;
    public:
        Werewolf(int hp, int damage, const std::string& name="Werewolf");
        virtual ~Werewolf();

        State& getHumanState() const;
        State& getWolfState() const;

        void turnIntoWolf();
        void turnIntoWerewolf();

        void ability(Unit* enemy);

};

#endif //WEREWOLF_H