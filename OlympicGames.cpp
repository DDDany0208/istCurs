#include "OlympicGames.h"

#include <fstream>
#include "json.hpp"

using json = nlohmann::json;

void OlympicGames::notify() {

}

int OlympicGames::getCount() const {
    return count;
}

void OlympicGames::unsubscribe(Client *client) {

}

void OlympicGames::subscribe(Client *client) {

}

OlympicGames::OlympicGames() {
    string textJson = this->readFromFile("main.json");
    json j = json::parse(textJson);
    unsigned long size = j.size();
    for (int i = 0; i < size; ++i) {
        json current = j[i];
        People *p = new People();
        p->setFio(current["fio"]);
        p->setForce(current["f"]);
        p->setAgility(current["a"]);
        p->setLuck(current["l"]);
        p->setCountry(current["country"]);
        cout << *p << endl;
    }
}


string OlympicGames::readFromFile(string filename) {
    ifstream file;
    file.open("../" + filename);
    string text = "";
    string line;

    // check if file not opened
    if (file.fail()) {
        cerr << "Файл не удолась прочитать" << endl;
        return "";
    }

    while (getline(file, line))
    {
        text += line;
    }
    
    file.close();
    return text;
}
