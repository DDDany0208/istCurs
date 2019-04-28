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

    const string sports[4] = {
            "Skeleton", // Скелетон сила
            "Biatlon", // Биатлон выносливость
            "Skating", // Фигурное удача
            "IceSkating" // Конькобежный ловкость
    };

public:
    void notify();

    void subscribe(Client *client);
    void unsubscribe(int index);

    OlympicGames();

    int getCount() const;

    void getResults();

};


#endif //ISTCURS_OLYMPICGAMES_H
