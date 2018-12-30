#include <iostream>
#include "units/Unit.h"
#include "units/Soldier.h"
#include "attack/BaseAttack.h"
#include "units/Werewolf.h"
#include "spellcaster/SpellCaster.h"
#include "spellcaster/Wizzard.h"


int main() {
    Wizzard* wizzard = new Wizzard(100, 100, 20, "Vova");
    std::cout << "Spellbook: ";
    wizzard->showSpellBook();

    delete wizzard;
    return 0;
}





    // Unit* s1 = new Unit(100, 20, "Kolya", USUAL);
    // Unit* s2 = new Unit(110, 10, "Warrior", USUAL);
    // Soldier* soldier = new Soldier(110, 10, "Soldier");

    // s1->attack(soldier);
    // std::cout << *s1 << std::endl;
    // std::cout << *soldier << std::endl;
    
    // delete s1;
    // delete s2;

    //     Werewolf* werewolf1 = new Werewolf(100, 20, "Werewolf1");
    // Werewolf* werewolf2 = new Werewolf(100, 20, "Werewolf2");

    // werewolf1->attack(werewolf2);
    // std::cout << "------ w1 attacks w2 -----" << std::endl;

    // std::cout << *werewolf1 << std::endl;
    // std::cout << *werewolf2 << std::endl;
    // werewolf2->attack(werewolf1);
    // std::cout << "------ w2 attacks w1 -----" << std::endl;

    // std::cout << *werewolf1 << std::endl;
    // std::cout << *werewolf2 << std::endl;
    // werewolf1->turnIntoWolf();
    // std::cout << "------ w1 turned into wolf-----" << std::endl;
    // std::cout << *werewolf1 << std::endl;

    // werewolf1->attack(werewolf2);

    // std::cout << *werewolf1 << std::endl;
    // std::cout << *werewolf2 << std::endl;

    // werewolf1->turnIntoWerewolf();
    // std::cout << "------ w1 turned into werewolf-----" << std::endl;
    // std::cout << *werewolf1 << std::endl;


    // delete werewolf1;
    // delete werewolf2;
    // return 0;