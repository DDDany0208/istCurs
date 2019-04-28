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
