//
// Created by Ludwig Sterner on 2023-11-02.
//

#ifndef BTH_DV1626_WORDCOUNTER_H
#define BTH_DV1626_WORDCOUNTER_H
#include <iostream>

using namespace std;

void wordCounter() {
    string userMessage;
    cout << "Please enter your message: ", getline(cin,userMessage);

    int sentenceSpaces = 0;
    for (int i = 0; i < userMessage.length(); i++) {
        if (userMessage[i] == ' '){
            sentenceSpaces++;

        }
    }
    sentenceSpaces++;
    cout << "There are " << sentenceSpaces << " words in the sentence." << endl;

};


#endif //BTH_DV1626_WORDCOUNTER_H
