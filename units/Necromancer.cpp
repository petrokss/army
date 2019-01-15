#include "Necromancer.h"

Necromancer::Necromancer(int hp, int damage, const std::string& name) : Unit(hp, damage, name, NECROMANCER) {
    this->unit_attack = new BaseAttack();
    std::cout << "Necromancer constructor" << std::endl;
}
Necromancer::~Necromancer() {
    std::cout << "Necromancer destructor" << std::endl;
}

void Necromancer::addObservable(Observable* observable) {
    this->observervables->insert(observable);
}
void Necromancer::removeObservable(Observable* observable) {
    this->observervables->erase(observable);
}
void Necromancer::update(int hp) {
    this->addHp(hp);
}

void Necromancer::observerNotify() {
    std::set<Observable*>::iterator it;

    for ( it = observervables->begin(); it != observervables->end(); it++ ) {
        Observable* observable = *it;

        observable->removeObserver(this);
    }
}
