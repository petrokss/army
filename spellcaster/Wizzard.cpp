#include "Wizzard.h"

//attacks damage spells 100%, but healing spells 50%
Wizzard::Wizzard(int hp, int mana, int damage, const std::string& name) : SpellCaster(hp, mana, damage, name) {
    std::cout << "Wizzard constructor" << std::endl;

    this->spellBook = new std::map<spellNames, std::unique_ptr<Spell> >;

    //Fireball *f = new Fireball(30, 30);
    // spellBook[fireball] = std::unique_ptr<Spell>(new Fireball(30, 30));
    
    // spellBook->insert(
    //     std::pair<spellNames, std::unique_ptr<Spell> >(
    //             fireball, std::unique_ptr<Spell>(new Fireball(30, 30))
    //         )
    // );
    
    // Fireball f;
    
    spellBook->insert(
        std::make_pair(fireball, std::unique_ptr<Spell>(new Fireball(30, 30)))
    );
}
Wizzard::~Wizzard() {
    std::cout << "Wizzard destructor" << std::endl;
}