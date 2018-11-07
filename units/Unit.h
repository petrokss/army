#ifndef UNIT_H
#define UNIT_H

#include <iostream>
#include "../attack/BaseAttack.h"
#include "State.h"

class BaseAttack;
class State;

class Unit {
    private:
        int hp;
        int damage;
        std::string* name;
        BaseAttack* unit_attack;
        State* unit_state;
    public:
        Unit(State* unit_state, BaseAttack* unit_attack);
        ~Unit();

        const int getHp() const;
        const int getDamage() const;
        const std::string& getName() const;

        void takeDamage(Unit* enemy);
        void getDamage(Unit* enemy);
        void takeCounterAttackDamage(Unit* enemy);
        void attack(Unit* enemy);
        void counterAttack(Unit* enemy);
};

std::ostream& operator<<(std::ostream& out, Unit& unit );

#endif //UNIT_H