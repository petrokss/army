#ifndef OBSERVER_H
#define OBSERVER_H

#include <map>
#include "../units/Unit.h"

class Observer {
    private:
        std::map<std::string, Unit*>* observeMap;
    public:
        Observer();
        ~Observer();

        void add(Unit* unit);
        void remove(Unit* unit);
        void notify();

};


#endif // OBSERVER_H