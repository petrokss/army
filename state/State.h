#ifndef STATE_H
#define STATE_H

#include <iostream>
#include "../exceptions.h"

class State {
    private:
        int hp;
        int hpLimit;
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
        void takeDamage(int damage);
              
};

std::ostream& operator<<(std::ostream& out, State& state );

#endif // STATE_H