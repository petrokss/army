#include <iostream>
#include "units/Unit.h"
#include "units/Soldier.h"
#include "units/Berserker.h"
#include "units/Werewolf.h"
#include "units/Rouge.h"
#include "units/Vampire.h"
#include "units/Necromancer.h"
#include "attack/BaseAttack.h"
#include "attack/RougeAttack.h"
#include "attack/VampireAttack.h"
#include "attack/WerewolfAttack.h"
#include "spellcaster/SpellCaster.h"
#include "spellcaster/Wizzard.h"
#include "spellcaster/Priest.h"
#include "spellcaster/Healer.h"
#include "spellcaster/Warlock.h"
#include "spell/Book.h"


int main() {
   Soldier* sol1 = new Soldier(100, 20, "Vasya");
   Soldier* sol2 = new Soldier(100, 20, "Petya");
   Vampire* vamp1 = new Vampire(100, 20, "Edvard");
   Vampire* vamp2 = new Vampire(100, 20, "Bella");
   Werewolf* wwf = new Werewolf(100, 20);
   Priest* pr = new Priest(100, 100, 20, "Filariot");
   Wizzard* wiz = new Wizzard(100, 100, 20, "Mag");
   Necromancer* necro1 = new Necromancer(100, 20, "Necro1");
   Necromancer* necro2 = new Necromancer(100, 20, "Necro2");
   Necromancer* necro3 = new Necromancer(100, 20, "Necro3");
   Necromancer* necro4 = new Necromancer(100, 20, "Necro4");

   // necro1->attack(wwf);
   vamp1->ability(necro1);
   // std::cout << *necro1 << std::endl;
   // //necro1->ability(necro2);
   // std::cout << *necro2 << std::endl;
   // wwf->ability(vamp1);

   //wiz->cast(pr, fireball);
   //std::cout << *pr << std::endl;
   
   // wwf->turnIntoWolf();
   // wwf->attack(necro1);
   // std::cout << *wwf << "wolf"<< std::endl;
   // wwf->turnIntoWerewolf();
   // std::cout << *wwf << "Werewolf"<< std::endl;


   necro1->attack(sol1);
   std::cout << *sol1 << std::endl;

   necro2->attack(sol1);

   necro1->attack(necro2);
   necro2->attack(necro3);
   necro3->attack(necro4);
   necro3->attack(sol1);
   necro3->attack(sol1);
   necro4->attack(necro1);
   necro4->attack(sol1);

   std::cout << *sol1 << std::endl;
   std::cout << *necro1 << std::endl;
   std::cout << *necro2 << std::endl;
   std::cout << *necro3 << std::endl;
   std::cout << *necro4 << std::endl;

   delete sol1;
   delete sol2;
   delete vamp1;
   delete vamp2;
   delete wwf;
   delete pr;
   delete necro1;
   delete necro2;
   delete necro3;
   delete necro4;

   return 0;
}




   // Warlock* warl = new Warlock(100, 100, 20);

   // warl->createDemon();
   // //warl->createDemon();
   // //warl->createDemon();
   // warl->ability(sol);

   //  std::cout << *sol << std::endl;
   //  std::cout << *warl << std::endl;


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