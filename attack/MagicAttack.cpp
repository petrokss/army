#include "MagicAttack.h"

MagicAttack::MagicAttack() : BaseAttack() {
    std::cout << "MagicAttack constructor"<< std::endl;
}
MagicAttack::~MagicAttack() {
    std::cout << "MagicAttack destructor"<< std::endl;
}
//how to delete spells after attacks?
void MagicAttack::cast(SpellCaster* attacker, Unit* target, spellNames spellName) {
    if ( target->gettype() == BERSERKER ) {
        std::cout << "Berserker doens't affect magic! " << std::endl;
        return;
    } else {
        Spell* spell = attacker->findSpell(spellName);
        if ( spell != 0 ) {
            if ( attacker->getMana() >= spell->getCost() ) {
                spell->action(target);
                attacker->spendMana(spell->getCost());
            } else {
                std::cout << "Increase mana to cast this spell" << std::endl;
            }
        } 
    }
    std::cout << "MagicAttack cast"<< std::endl;
}