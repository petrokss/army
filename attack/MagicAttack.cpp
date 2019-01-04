#include "MagicAttack.h"

MagicAttack::MagicAttack() : BaseAttack() {
    std::cout << "MagicAttack constructor"<< std::endl;
}
MagicAttack::~MagicAttack() {
    std::cout << "MagicAttack destructor"<< std::endl;
}
//how to delete spells after attacks?
void MagicAttack::cast(SpellCaster* attacker, Unit* target, spellNames spellName) {
    //attacker->findSpell(spellName).action(target);
    Spell* spell = attacker->findSpell(spellName);
    if ( spell != 0 ) {
        spell->action(target);
        attacker->spendMana(spell->getCost());
    } 
    std::cout << "MagicAttack cast"<< std::endl;
}