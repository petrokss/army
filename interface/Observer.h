#ifndef OBSERVER_H
#define OBSERVER_H

#include <set>
#include "../units/Unit.h"

class Observer {
    private:
        std::set<Unit*>* observervables;
    public:
        Observer();
        ~Observer();

        virtual void addObservable(Observable* observable);
        virtual void removeObservable(Observable* observable);
        virtual void update();

};


#endif // OBSERVER_H