#ifndef ISTCURS_PEOPLE_H
#define ISTCURS_PEOPLE_H

#include <string>
#include <iostream>

using namespace std;

class People {
    
    string fio;
    string country;
    int force;
    int agility;
    int luck;
    int stamina;

public:
    const string &getFio() const;

    void setFio(const string &fio);

    const string &getCountry() const;

    void setCountry(const string &country);

    int getForce() const;

    void setForce(int force);

    int getAgility() const;

    void setAgility(int agility);

    int getLuck() const;

    void setLuck(int luck);

    int getStamina() const;

    void setStamina(int stamina);

};


#endif //ISTCURS_PEOPLE_H
