#ifndef OBSERVABLE_H
#define OBSERVABLE_H

#include <set>
//#include "../units/Unit.h"
//#include "../units/Necromancer.h"
#include "Observer.h"

class Observer;

class Observable {
    private:
        std::set<Observer*>* observers;
    public:
        Observable();
        ~Observable();

        virtual void addObserver(Observer* observer);
        virtual void removeObserver(Observer* observer);
        virtual void notify(int hp);

};


#endif // OBSERVABLE_H