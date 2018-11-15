#ifndef ROUGE_H
#define ROUGE_H

#include "Unit.h"

class Rouge : public Unit {
    public:
        Rouge( int hp, int damage, const std::string& name="Rouge");
        virtual ~Rouge();

};

#endif //ROUGE_H