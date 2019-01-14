#ifndef STATE_H
#define STATE_H

#include <iostream>
#include "../exceptions.h"

enum UnitType {
    USUAL,      //0
    BERSERKER,  //1
    VAMPIRE,    //2
    WEREWOLF,   //3
    NECROMANCER,//4
    MAGIC       //5
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
        const UnitType gettype() const;
        bool getIsInfected() const;   
        
        bool checkIfAlive();
        void addHp(int value);
        void takeDamage(int damage);
        void takeMagicDamage(int points);
        void beInfected();
              
};

std::ostream& operator<<(std::ostream& out, State& state );

#endif // STATE_H