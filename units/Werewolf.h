#ifndef WEREWOLF_H
#define WEREWOLF_H

#include "Unit.h"
#include "../attack/WerewolfAttack.h"

class WerewolfAttack;

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

        void ability(Unit* enemy);

};

#endif //WEREWOLF_H