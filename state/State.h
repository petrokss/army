#ifndef STATE_H
#define STATE_H

#include <iostream>
#include "../exceptions.h"

enum UnitType {
    USUAL,      //0
    VAMPIRE,    //1
    WEREWOLF,   //2
    NECROMANCER,//3
    MAGIC       //4
};

class State {
    private:
        int hp;
        int hpLimit;
        int damage;
        std::string* name;
        UnitType type;
        bool isInfected;
    public:
        State(int hp,
            int damage,
            const std::string& name,
            UnitType type);
        ~State();

        const int getHp() const;
        const int getHpLimit() const;
        const int getDamage() const;
        const std::string& getName() const;
        const UnitType gettype();
        bool getIsInfected() const;   
        
        void checkIfAlive();
        void addHp(int value);
        void takeDamage(int damage);
        void beInfected();
              
};

std::ostream& operator<<(std::ostream& out, State& state );

#endif // STATE_H