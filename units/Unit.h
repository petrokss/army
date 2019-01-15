#ifndef UNIT_H
#define UNIT_H

#include <iostream>
#include <set>
#include "../attack/BaseAttack.h"
#include "../state/State.h"
#include "../interface/Observable.h"
#include "../interface/Observer.h"

class BaseAttack;
class State;

class Unit : public Observable {
    //private:
        //void setHp(int hp);
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
        const UnitType gettype() const;

        void beInfected();
        void die();

        void addHp(int value);
        void takeDamage(int damage);
        void takeCounterAttackDamage(Unit* enemy);
        void attack(Unit* enemy);
        void counterAttack(Unit* enemy);


        void transformToWerewolf();
        void transformToVampire();
        void ability(Unit* enemy);

        virtual void addObserver(Observer* observer);
        virtual void removeObserver(Observer* observer);
        virtual void notify(int hp);
};

std::ostream& operator<<(std::ostream& out, Unit& unit );

#endif //UNIT_H