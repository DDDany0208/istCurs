#include "OlympicGames.h"

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
    this->readFromFile("main.json");
}

void OlympicGames::readFromFile(string filename) {
    
}
