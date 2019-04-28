#ifndef ISTCURS_CLIENT_H
#define ISTCURS_CLIENT_H

#include <iostream>
#include <string>

using namespace std;

class Client {

    string choice; // country choice for client
public:
    const string &getChoice() const;

    void setChoice(const string &choice);

private:

    void update (string winner);

};


#endif //ISTCURS_CLIENT_H