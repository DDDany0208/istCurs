#include "People.h"

const string &People::getFio() const {
    return fio;
}

void People::setFio(const string &fio) {
    People::fio = fio;
}

const string &People::getCountry() const {
    return country;
}

void People::setCountry(const string &country) {
    People::country = country;
}

int People::getForce() const {
    return force;
}

void People::setForce(int force) {
    People::force = force;
}

int People::getAgility() const {
    return agility;
}

void People::setAgility(int agility) {
    People::agility = agility;
}

int People::getLuck() const {
    return luck;
}

void People::setLuck(int luck) {
    People::luck = luck;
}

int People::getStamina() const {
    return stamina;
}

void People::setStamina(int stamina) {
    People::stamina = stamina;
}

void People::parseJson2People(json j) {
    this->fio = j["fio"];
    this->agility = j["a"];
    this->country = j["country"];
    this->force = j["force"];
    this->luck = j["luck"];
    this->stamina = j["stamina"];
}

ostream &operator<<(ostream &os, const People &people) {
    os << "fio: " << people.fio << " country: " << people.country << " force: " << people.force << " agility: "
       << people.agility << " luck: " << people.luck << " stamina: " << people.stamina;
    return os;
}

