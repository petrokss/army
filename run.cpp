#include <iostream>
#include "units/Unit.h"
#include "units/Soldier.h"
#include "units/Berserker.h"
#include "units/Werewolf.h"
#include "units/Rouge.h"
#include "units/Vampire.h"
#include "attack/BaseAttack.h"
#include "attack/RougeAttack.h"
#include "attack/VampireAttack.h"
#include "attack/WerewolfAttack.h"
#include "spellcaster/SpellCaster.h"
#include "spellcaster/Wizzard.h"
#include "spellcaster/Priest.h"
#include "spell/Book.h"


int main() {
    Soldier* sol = new Soldier(100, 20, "Vasya");
    // Soldier* sol2 = new Soldier(100, 20, "Yeti");
    // Vampire* vamp = new Vampire(100, 20, "Vamp");
    Priest* pr = new Priest(100, 100, 20, "Filariot");

    pr->cast(sol, fireball);

    delete sol;
    delete pr;
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