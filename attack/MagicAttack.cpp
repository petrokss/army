#include "MagicAttack.h"

MagicAttack::MagicAttack() : BaseAttack() {
    std::cout << "MagicAttack constructor"<< std::endl;
}
MagicAttack::~MagicAttack() {
    std::cout << "MagicAttack destructor"<< std::endl;
}

// void MagicAttack::cast(SpellCaster* attacker, Unit* target, SpellNames spellName,Spell* spell) {
//     attacker->getSpellBook()->findSpell(attacker->getSpellBook(), spellName);
// }