#ifndef UNIT_H
#define UNIT_H

#include <iostream>
#include "../attack/BaseAttack.h"
#include "../state/State.h"

class BaseAttack;

class Unit {
    protected:
        BaseAttack* unit_attack;
        State* unit_state;
    public:
        Unit(int hp, int damage, const std::string& name);
        ~Unit();

        const int getHp() const;
        const int getDamage() const;
        const std::string& getName() const;
        State& getState() const;
        void checkIfAlive();


        void addHp(int value);
        void takeDamage(int damage);
        void takeCounterAttackDamage(Unit* enemy);
        void attack(Unit* enemy);
        void counterAttack(Unit* enemy);
};

std::ostream& operator<<(std::ostream& out, Unit& unit );

#endif //UNIT_H