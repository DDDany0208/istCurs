#include "OlympicGames.h"

#include <fstream>
#include "json.hpp"

using json = nlohmann::json;

void OlympicGames::notify() {
    string winner = "Russia";

    for (int i = 0; i < count; ++i) {
        clients[i]->update(winner);
    }
}

int OlympicGames::getCount() const {
    return count;
}

void OlympicGames::unsubscribe(int index) {
    if (index < 0 || index >= this->count) {
        cout << "Ошибка, неверный индекс массива" << endl;
    } else {
        int k = 0;
        Client **copy = new Client*[this->count-1];
        for (int i = 0; i < this->count; ++i) {
            if (i != index) {
                copy[k] = this->clients[i];
                k++;
            } else {
                Client *removed = copy[k];
                free(removed);
            }
        }
        this->count--;
        this->clients = new Client*[this->count];
        for (int j = 0; j < this->count; ++j) {
            this->clients[j] = copy[j];
        }
    }
}

void OlympicGames::subscribe(Client *client) {
    this->count++;
    Client **copy = new Client*[this->count - 1];
    for (int i = 0; i < this->count - 1; ++i) {
        copy[i] = this->clients[i];
    }
    this->clients = new Client*[this->count];
    for (int j = 0; j < this->count - 1; ++j) {
        this->clients[j] = copy[j];
    }
    this->clients[this->count - 1] = client;
}

OlympicGames::OlympicGames() {
    this->peopleCount = 0;
    this->count = 0;
    string textJson = this->readFromFile("main.json");
    json j = json::parse(textJson);
    unsigned long size = j.size();
    this->peopleCount = (int) size;
    cout << "Прочитано: " << size << " спротсменов" << endl;
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

void OlympicGames::getResults() {
    for (int j = 0; j < 4; ++j) {
        string sport = this->sports[j];
        string winnerCountry = "";
        int max = -1;
        for (int i = 0; i < peopleCount; ++i) {
            People current = this->peoples[i];
            int result;

            if (current.getSport() != sport) {
                continue;
            }

            if (sport == "Skeleton") {
                result = current.getForce();
            } else if (sport == "Biatlon") {
                result = current.getAgility();
            } else if (sport == "Skating") {
                result = current.getLuck();
            } else if (sport == "IceSkating") {
                result = current.getStamina();
            }

            if (result > max) {
                result = max;
                winnerCountry = current.getCountry();
            }

            cout << "В ввиде спорта " << sport << " побдела << " << winnerCountry;
        }
    }
    this->notify();
}
