#include " Fireball.h" //what's wronh with include?

Fireball::Fireball(int cost, int points) : Spell(cost, points) {
    std::cout << "Fireball constructor" << std::endl;
}
Fireball::~Fireball() {
    std::cout << "Fireball destructor" << std::endl;
}

void Fireball::action(Unit* target) {
    target->takeDamage(this->points);
}