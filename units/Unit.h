#ifndef UNIT_H
#define UNIT_H

#include <iostream>
#include "../attack/BaseAttack.h"
#include "../state/State.h"

class BaseAttack;
class State;

class Unit {
    protected:
        BaseAttack* unit_attack;
        State* unit_state;
    public:
        Unit(int hp, int damage, const std::string& name, UnitType type);
        ~Unit();

        const int getHp() const;
        const int getHpLimit() const;
        const int getDamage() const;
        const std::string& getName() const;
        State& getState() const;
        void checkIfAlive();
        bool getIsInfected() const;

        void beInfected();

        void addHp(int value);
        void takeDamage(int damage);
        void takeCounterAttackDamage(Unit* enemy);
        void attack(Unit* enemy);
        void counterAttack(Unit* enemy);

        //void transformToWolf(Werewolf* werewolf);
};

std::ostream& operator<<(std::ostream& out, Unit& unit );

#endif //UNIT_H