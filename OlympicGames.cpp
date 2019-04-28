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
    int size = j.size();
    for (int i = 0; i < size; ++i) {
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
    cout << text;
    file.close();
    return text;
}
