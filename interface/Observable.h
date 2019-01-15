#ifndef OBSERVABLE_H
#define OBSERVABLE_H

#include <set>
#include "Observer.h"

class Observer;

class Observable {
    protected:
        std::set<Observer*>* observers;
    public:
        // Observable();
        // ~Observable();

        virtual void addObserver(Observer* observer) = 0;
        virtual void removeObserver(Observer* observer) = 0;
        virtual void notify(int hp) = 0;

};


#endif // OBSERVABLE_H