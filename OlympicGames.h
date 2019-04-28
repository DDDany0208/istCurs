#ifndef ISTCURS_OLYMPICGAMES_H
#define ISTCURS_OLYMPICGAMES_H

#include "People.h"
#include "Client.h"

class OlympicGames {

    People *peoples;
    int count;

    Client *clients;

    void readFromFile(string filename);

public:
    void notify();

    void subscribe(Client *client);
    void unsubscribe(Client *client);

    OlympicGames();

    int getCount() const;

};


#endif //ISTCURS_OLYMPICGAMES_H
