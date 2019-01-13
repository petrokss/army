#include "Observable.h"

Observable::Observable() {
    this->observableMap = new std::map<std::string, Necromancer*>;
}

Observable::~Observable() {
    delete this->observableMap;
}

void Observable::add(Necromancer* necro) {
    std::map<std::string, Necromancer*>::iterator it = observableMap->find(necro->getName());
    if ( it != observableMap->end() ) {
        std::cout << "There is such necromancer in observable map" << it->second << std::endl;
    } else {
        this->observableMap->insert(std::pair<std::string, Necromancer*>(necro->getName(), necro));
    }
}

void Observable::remove(Necromancer* necro) {
    std::map<std::string, Necromancer*>::iterator it = observableMap->find(necro->getName());
    if ( it != observableMap->end() ) {
        observableMap->erase(necro->getName());
    }
}

void Observable::notify() {

}

