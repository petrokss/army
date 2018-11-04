#ifndef SOLDIER_H
#define SOLDIER_H

#include <iostream>
#include "Unit.h"

class Soldier : public Unit {
    public:
        Soldier(const std::string& name="Soldier");
        virtual ~Soldier();

};


#endif //SOLDIER_H