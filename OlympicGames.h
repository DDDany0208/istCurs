#ifndef ISTCURS_OLYMPICGAMES_H
#define ISTCURS_OLYMPICGAMES_H

#include "People.h"
#include "Client.h"

class OlympicGames {

    People *peoples;
    int count;

    Client **clients;
    int peopleCount;

    string readFromFile(string filename);

public:
    void notify();

    void subscribe(Client *client);
    void unsubscribe(int index);

    OlympicGames();

    int getCount() const;

};


#endif //ISTCURS_OLYMPICGAMES_H
