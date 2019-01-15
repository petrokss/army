#ifndef OBSERVER_H
#define OBSERVER_H

#include <set>
#include "Observable.h"

class Observable;

class Observer {
    private:
        std::set<Observable*>* observervables;
    public:
        Observer();
        ~Observer();

        // virtual void addObservable(Observable* observable);
        // virtual void removeObservable(Observable* observable);
        // virtual void update();

};


#endif // OBSERVER_H