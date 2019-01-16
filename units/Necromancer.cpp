#include "Necromancer.h"

Necromancer::Necromancer(int hp, int damage, const std::string& name) : Unit(hp, damage, name, NECROMANCER) {
    this->unit_attack = new BaseAttack();
    this->observables = new std::set<Observable*>();
    std::cout << "Necromancer constructor" << std::endl;
}
Necromancer::~Necromancer() {
    std::cout << "Necromancer destructor" << std::endl;
}

void Necromancer::attack(Unit* enemy) {
    if ( enemy->getHp() > 0 ) {
        enemy->addObserver(this);
        this->addObservable(enemy);
        Unit::attack(enemy);
    }
}


void Necromancer::addObservable(Observable* observable) {
    this->observables->insert(observable);
}
void Necromancer::removeObservable(Observable* observable) {
    this->observables->erase(observable);
}
void Necromancer::update(int hp) {
    this->addHp(hp);
}

void Necromancer::observerNotify() {
    std::set<Observable*>::iterator it;

    for ( it = observables->begin(); it != observables->end(); it++ ) {
        Observable* observable = *it;

        observable->removeObserver(this);
    }
}

void Necromancer::ability(Unit* target) {
    this->addHp(target->getHpLimit()/5);
    target->takeDamage(this->getHpLimit()/5);
}
