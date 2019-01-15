#ifndef NECROMANCER_H
#define NECROMANCER_H

#include "Unit.h"
#include "../interface/Observer.h"

class Necromancer : public Unit, public Observer {
    public:
        Necromancer(int hp, int damage, const std::string& name="Necromancer");
        virtual ~Necromancer();
        
        virtual void addObservable(Observable* observable);
        virtual void removeObservable(Observable* observable);
        virtual void update(int hp);
        virtual void observerNotify();

};

#endif // NECROMANCER_H