#include "Book.h"

Book::Book() {

}
Book::~Book() {

}

void Book::addSpell(spellNames spellNames, Spell* newSpell) {

}

Spell* Book::findSpell(spellNames spellNames) {}

std::ostream& operator<<(std::ostream& os, const std::map<spellNames, Spell*>& spellBook) {
    for (std::map<spellNames, Spell*>::const_iterator it = spellBook.begin(); it != spellBook.end(); it++ ) {
        os << it->first << " " << it->second;
    }
    return os;
}
