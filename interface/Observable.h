#ifndef OBSERVABLE_H
#define OBSERVABLE_H

#include <set>
#include "../units/Unit.h"
//#include "../units/Necromancer.h"
#include "Observer.h"

class Observable {
    private:
        std::set<Unit*>* observers;
    public:
        Observable();
        ~Observable();

        virtual void addObserver(Observer* observer);
        virtual void removeObserver(Observer* observer);
        virtual void notify();

};


#endif // OBSERVABLE_H