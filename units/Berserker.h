#ifndef BERSERKER_H
#define BERSERKER_H

#include "Unit.h"

class Berserker : public Unit {
    public:
        Berserker( const std::string& name="Berserker");
        virtual ~Berserker();

};

#endif //BERSERKER_H