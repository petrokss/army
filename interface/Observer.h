#ifndef OBSERVER_H
#define OBSERVER_H

#include <set>
#include "Observable.h"

class Observable;

class Observer {
    protected:
        std::set<Observable*>* observables;
    public:
        // Observer();
        // ~Observer();

        virtual void addObservable(Observable* observable) = 0;
        virtual void removeObservable(Observable* observable) = 0;
        virtual void update(int hp) = 0;
        virtual void observerNotify() = 0;


};


#endif // OBSERVER_H