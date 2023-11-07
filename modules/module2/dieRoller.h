//
// Created by Ludwig Sterner on 2023-11-03.
//

#ifndef BTH_DV1626_DIEROLLER_H
#define BTH_DV1626_DIEROLLER_H
#include <iostream>
#include <random>

using namespace std;

void dieRoller() {

#include <iostream>
#include <random>

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> distribution(1, 6);

    int aiRandomNumber = distribution(gen);
    int userNumber;

    int userScore, aiScore;

    cout << "The die will be rolled 10 times. I bet on the die-value " << aiRandomNumber << " Which value do you bet on? ", cin >> userNumber;

    cout << "The die rolls resulted in ";
    for(int i = 0; i < 10; i++){
        int turnRandomNumber = distribution(gen);
        cout << turnRandomNumber << " ";

        if (turnRandomNumber == userNumber){
            userScore++;
        }
        else if (turnRandomNumber == aiRandomNumber){
            aiScore++;
        }

    }

    cout << "\n" << "You got : " << userScore << " hit(s)" << endl;
    cout << "I got : " << aiScore << " hit(s)" << endl;

    if (userScore > aiScore){
        cout << "You won!";
    } else if (userScore < aiScore){
        cout << "I won!";
    } else if ( userScore == aiScore){
        cout << "It's a tie.";
    }
};


#endif //BTH_DV1626_DIEROLLER_H
