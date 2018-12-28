#include "Wizzard.h"


//attacks damage spells 100%, but healing spells 50%
Wizzard::Wizzard(int hp, int mana, int damage, const std::string& name) : SpellCaster(hp, mana, damage, name) {
   this->spellBook->insert(std::pair<spellNames, Spell*>(fireball, new Fireball(30, 30)));
   
   
   
    // this->spellBook = new std::map<spellNames, std::unique_ptr<Spell> >;
    //std::map<spellNames, std::unique_ptr<Spell> > spellBook;
    //this->spellBook[1] = std::unique_ptr<Spell>(new Fireball(30, 30));
    // this->spellBook->insert(std::make_pair<spellNames, std::unique_ptr<Spell> >(fireball, new Fireball(30, 30)));

    //myMapExample.insert ( pair<string,float>("Desk",0.01) );
    //Fireball *f = new Fireball(30, 30);
    // spellBook[fireball] = std::unique_ptr<Spell>(new Fireball(30, 30));
    
    // spellBook->insert(
    //     std::pair<spellNames, std::unique_ptr<Spell> >(
    //             fireball, std::unique_ptr<Spell>(new Fireball(30, 30))
    //         )
    // );
    
    // Fireball f;
    
    // spellBook->insert(
    //     std::make_pair(fireball, std::unique_ptr<Spell>(new Fireball(30, 30)))
    // );
    std::cout << "Wizzard constructor" << std::endl;
}
Wizzard::~Wizzard() {
    std::cout << "Wizzard destructor" << std::endl;
}