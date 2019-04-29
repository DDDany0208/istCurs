#include <iostream>

#include "OlympicGames.h"
#include "Client.h"

string readCountry();

int main() {

    string country;
    Client *client = new Client();
    OlympicGames *games = new OlympicGames();
    games->subscribe(client);

    while (country == "") {
        cout << "Выбирите страну, за которую болете:" << endl;
        cout << "1 - Russia, 2 - Canada, 3 - Finland, 4 - France, 5 - Japan" << endl;
        country = readCountry();
    }

    client->setChoice(country);

    games->getResults();
    free(games);

    return 0;
}

string readCountry() {
    int num = 0;
    cin >> num;

    switch (num) {
        case 1:
            return "Russia";
            break;
        case 2:
            return "Canada";
            break;
        case 3:
            return "Finland";
            break;
        case 4:
            return "France";
            break;
        case 5:
            return "Japan";
            break;
        default:
            cout << "Country error" << endl;
            return "";
    }
}