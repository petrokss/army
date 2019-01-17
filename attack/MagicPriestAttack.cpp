#include "MagicPriestAttack.h"

MagicPriestAttack::MagicPriestAttack() {
    std::cout << "MagicPriestAttack constructor"<< std::endl;

}

MagicPriestAttack::~MagicPriestAttack() {
    std::cout << "MagicPriestAttack destructor"<< std::endl;
}

void MagicPriestAttack::cast(SpellCaster* attacker, Unit* target, spellNames spellName) {
        if ( target->gettype() == BERSERKER ) {
        std::cout << "Berserker doens't affect magic! " << std::endl;
        return;
    } else {
        Spell* spell = attacker->findSpell(spellName);  
        if ( spell != 0 ) {
            if ( attacker->getMana() >= spell->getCost() ) {
                if ( target->gettype() == VAMPIRE || target->gettype() == NECROMANCER ) {
                    spell->action(target);
                    spell->action(target);
                    attacker->spendMana(spell->getCost());
                } else {
                    spell->action(target);
                    attacker->spendMana(spell->getCost());
                }
            }
        } 
    }
    std::cout << "MagicPriestAttack cast"<< std::endl;
}
