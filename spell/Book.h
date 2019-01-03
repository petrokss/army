#ifndef BOOK_H
#define BOOK_H

#include "Spell.h"
#include <map>


class Book {
    private:
        std::map<spellNames, Spell*>* spellBook;
    public: 
        Book();
        ~Book();

        void addSpell(spellNames spellNames, Spell* newSpell);
        Spell* findSpell(spellNames spellNames);
};

std::ostream& operator<<(std::ostream& os, const std::map<spellNames, Spell*>& spellBook);

#endif // BOOK_H