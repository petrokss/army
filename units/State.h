#ifndef STATE_H
#define STATE_H

#include <iostream>
#include "Unit.h"
#include "../attack/BaseAttack.h"

class Unit;
//class BaseAttack;

class State {
    private:
        int hp;
        int damage;
        std::string* name;
    public:
        State(int hp,
            int damage,
            const std::string& name);
        ~State();

        const int getHp() const;
        const int getDamage() const;
        const std::string& getName() const;    
        
        void checkIfAlive();
        void addHp(int value);
        void takeDamage(State* enemy);
              
};

std::ostream& operator<<(std::ostream& out, Unit& unit );

#endif // STATE_H