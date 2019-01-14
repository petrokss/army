// #include "Observer.h"

// Observer::Observer() {
//     this->observeMap = new std::map<std::string, Unit*>;
// }

// Observer::~Observer() {
//     delete this->observeMap;
// }


// void Observer::add(Unit* unit) {
//     std::map<std::string, Unit*>::iterator it = observeMap->find(unit->getName());
//     if ( it != observeMap->end() ) {
//         std::cout << "There is such unit in observer map" << it->second << std::endl;
//     } else {
//         this->observeMap->insert(std::pair<std::string, Unit*>(unit->getName(), unit));
//     }
// }

// void Observer::remove(Unit* unit) {
//     std::map<std::string, Unit*>::iterator it = observeMap->find(unit->getName());
//     if ( it != observeMap->end() ) {
//         observeMap->erase(unit->getName());
//     }
// }

// void Observer::notify() {

// }
