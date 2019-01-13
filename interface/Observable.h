#ifndef OBSERVABLE_H
#define OBSERVABLE_H

#include <map>
#include "../units/Unit.h"
#include "../units/Necromancer.h"

class Observable {
    private:
        std::map<std::string, Necromancer*>* observableMap;
    public:
        Observable();
        ~Observable();

        void add(Necromancer* necro);
        void remove(Necromancer* necro);
        void notify();

};


#endif // OBSERVABLE_H