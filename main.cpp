#include <iostream>

#include "OlympicGames.h"
#include "Client.h"

int main() {
    string country;
    Client *client = new Client;
    cout << "Выбирите страну, за которую болете:" << endl;
    cout << "Russia, Canada, Finland, France, Japan" << endl;

    cin >> country;
    client->setChoice(country);




    return 0;
}