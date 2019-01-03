#include "Book.h"

Book::Book() {
    this->spellBook = new std::map<spellNames, Spell*>;
    std::cout << "spellbook constructor"<< std::endl;
}
Book::~Book() {
    delete this->spellBook;
    std::cout << "spellbook destructor"<< std::endl;
}
//13 line works?
void Book::addSpell(spellNames spellName, Spell* newSpell) {
    if ( findSpell(this, spellName) != 0 ) {
        std::cout << "Book has such spell" << std::endl;
    } else {
        std::cout << "insert: " << spellName << std::endl;
        this->spellBook->insert(std::pair<spellNames, Spell*>(spellName, newSpell));
    }
}

Spell* Book::findSpell(Book* spellBoook, spellNames spellName) {
    std::map<spellNames, Spell*>::iterator it = spellBook->find(spellName);
    if ( it != spellBook->end() ) {
        std::cout << " Book has such spell: " << it->second << std::endl;
        return it->second;
    }
    std::cout << " There isn't such spell" << std::endl;
    return 0;
}

std::ostream& operator<<(std::ostream& os, const std::map<spellNames, Spell*>& spellBook) {
    for (std::map<spellNames, Spell*>::const_iterator it = spellBook.begin(); it != spellBook.end(); it++ ) {
        os << it->first << " " << it->second;
    }
    return os;
}
