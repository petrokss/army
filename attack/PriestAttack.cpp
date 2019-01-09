#include "PriestAttack.h"

PriestAttack::PriestAttack() : MagicAttack() {
    std::cout << "PriestAttack constructor"<< std::endl;
}
PriestAttack::~PriestAttack() {
    std::cout << "PriestAttack destructor"<< std::endl;
}

void PriestAttack::attack(Unit* attacker, Unit* enemy) {
    if ( enemy->gettype() == VAMPIRE || enemy->gettype() == NECROMANCER ) {
        enemy->takeDamage(attacker->getDamage() * 2);
        enemy->counterAttack(attacker);
    } else {
        enemy->takeDamage(attacker->getDamage());
        enemy->counterAttack(attacker);
    }
    std::cout << "Priest---Attack" << std::endl;
}

void PriestAttack::cast(SpellCaster* attacker, Unit* target, spellNames spellName) {
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
    std::cout << "MagicAttack cast"<< std::endl;
}
