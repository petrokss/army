#include "MagicState.h"

MagicState::MagicState(int hp, int damage, const std::string& name, int mana) : State(hp, damage, name, MAGIC), mana(mana), manaLimit(mana) {
    std::cout << "MagicState constructor" << std::endl;
}

MagicState::~MagicState() {}

const int MagicState::getMana() const {
    return this->mana;
}
const int MagicState::getManaLimit() const {
    return this->manaLimit;
}
//what to do if mana = 0? Reload automatically it or increase manually?
void MagicState::spendMana(int cost) {
    int manaNeeded = this->mana - cost;

    if ( manaNeeded <= 0 ) {
        this->mana = 0;
    }
    this->mana = manaNeeded;
}
void MagicState::increaseMana(int cost) {
    this->mana += cost;

    if (this->mana >= this->manaLimit ) {
        this->mana = this->manaLimit;
    }

}

std::ostream& operator<<(std::ostream& out, MagicState& magic_state ) {
    out << "mana: [" << magic_state.getMana() << "/" << magic_state.getManaLimit() << "]";
    return out;
}
