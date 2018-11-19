#ifndef STATE_H
#define STATE_H

#include <iostream>
#include "../exceptions.h"

enum UnitType {
    Usual,      //0
    Vampire,    //1
    Werewolf,   //2
    Necromancer //3
};

class State {
    private:
        int hp;
        int hpLimit;
        int damage;
        std::string* name;
        UnitType type;
    public:
        State(int hp,
            int damage,
            const std::string& name,
            UnitType type);
        ~State();

        const int getHp() const;
        const int getDamage() const;
        const std::string& getName() const;
        const UnitType gettype();   
        
        void checkIfAlive();
        void addHp(int value);
        void takeDamage(int damage);
              
};

std::ostream& operator<<(std::ostream& out, State& state );

#endif // STATE_H