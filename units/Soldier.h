#ifndef SOLDIER_H
#define SOLDIER_H

#include <iostream>
#include "Unit.h"

class Soldier : public Unit {
    public:
        Soldier(int hp, int damage, const std::string& name);
        virtual ~Soldier();

};


#endif //SOLDIER_H