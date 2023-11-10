//
// Created by Ludwig Sterner on 2023-11-04.
//

#ifndef BTH_DV1626_SPACECOUNTER_H
#define BTH_DV1626_SPACECOUNTER_H
#include <iostream>

using namespace std;

void spaceCounter() {

    string userMessage;
    cout << "Please enter your message: " , getline(cin, userMessage);

    int sentenceSpaces = 0;
    int i;

    for (i = 0; i < userMessage.length(), i++;){
        if (userMessage[i] == ' '){
            sentenceSpaces++;
        }
    }
    sentenceSpaces++;

    cout << "There are " << sentenceSpaces << " spaces in the sentence." << endl;



};


#endif //BTH_DV1626_SPACECOUNTER_H
