# Army
The final project of BootCamp studying course in DevClub. It demonstrates the knowledge of data structures and OOP.
Description of the game: the main class is Unit and inherited classes from the main like Soldiers and SpellCasters interact with each other and change each other's states during the battle.
1. Ordinary Units:
    * Soldier - unit without any special abilities
    * Rogue - unit cannot be counterattacked
    * Berserker - magic doesn't affect him
    * Vampire - during an attack/counterattack consumes part of the enemy’s life force
    * Werewolf - able to turn into a wolf
Vampires and Werewolfs can bite other units and injected units transform into Vampire or Werewolf.
2. Magic Units (SpellCasters):
    * Wizzard - attacks with combat spells (healing spells have only half of the power)
    * Healer - has healing spells (combat spells have only half of the power)
    * Priest - has healing spells, but takes 2x damage to Vampire and Necromancer
    * Warlock - can create Demons
    * Necromancer - monitors all those whom he attacked, in case of their death, receives a part of their hp  
3. Also, there are interfaces for Necromancer and other Units:
    * Observer
    * Observable
