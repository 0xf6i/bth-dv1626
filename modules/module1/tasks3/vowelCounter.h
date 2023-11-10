//
// Created by Ludwig Sterner on 2023-11-07.
//

#ifndef BTH_DV1626_VOWELCOUNTER_H
#define BTH_DV1626_VOWELCOUNTER_H
#include <string>
#include <iostream>

using namespace std;


void vowelCounter(){
    int vowelCount;
    vowelCount = 0;
    char vowels[6] = {'A','E','I','Y','U', 'O'};

    string userMessage;
    cout << "Please enter your message: ", getline(cin, userMessage);

    transform(userMessage.begin(), userMessage.end(), userMessage.begin(), ::toupper);
    char letters[userMessage.length()];
    strcpy(letters, userMessage.c_str());


    for (int j = 0; j < userMessage.length(); j++){
        char currentLetter = letters[j];
        for (int h = 0; h < strlen(vowels); h++){
            if (currentLetter == vowels[h]){
                vowelCount++;
                cout << j+1 << ": " << currentLetter << endl;
            }
        }
    }

    cout << "There was a total of " <<  vowelCount << " vowels in the sentence." << endl;

}


#endif //BTH_DV1626_VOWELCOUNTER_H
