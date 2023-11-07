//
// Created by Ludwig Sterner on 2023-11-02.
//

#ifndef BTH_DV1626_CHARCOUNTER_H
#define BTH_DV1626_CHARCOUNTER_H
#include <iostream>

using namespace std;

void charCounter() {

    string userMessage;
    cout << "Please enter your message: ", getline(cin,userMessage);

    for (int i = 0; i < userMessage.length(); i++) {
        if (userMessage[i] == ' '){
            cout << "There are: " << i << " letters before a space." << endl;
        }
    }

};


#endif //BTH_DV1626_CHARCOUNTER_H
