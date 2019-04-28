#include <iostream>

#include "OlympicGames.h"
#include "Client.h"

int main() {
    string country;
    Client *client = new Client;
    cout << "Выбирите страну, за которую болете:" << endl;
    cin >> country;
    client->setChoice(country);


    return 0;
}