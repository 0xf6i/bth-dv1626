//
// Created by Ludwig Sterner on 2023-11-03.
//

#ifndef BTH_DV1626_GAMETWENTYONE_H
#define BTH_DV1626_GAMETWENTYONE_H
#include <iostream>
#include <random>

using namespace std;




void gameTwentyOne() {

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> distribution(1, 13);

    string userName;
    cout << "Input your name: ", cin >> userName;

    string status = "Y";
    int gameSum = 0;
    int points = 0;

    while (status == "Y"){

        int randomNumber = distribution(gen);
        gameSum += randomNumber;

        cout << "You got the value: " << randomNumber << " The sum is " << gameSum << ". Continue (Y/N)? ", cin >> status;

    }

    if (gameSum >  21){
        cout << "Sorry "<< userName<< ", Your sum exceeded 21.";
    } else if (gameSum == 21){
        cout << "Congratulations "<< userName<< ", Your win is 50.";
    } else if (gameSum == 20){
        cout << "Congratulations "<< userName<< ", Your win is 15.";
    } else if (gameSum > 0 && gameSum < 20){
        cout << "Congratulations "<< userName<< ", Your win is 5.";
    }




};


#endif //BTH_DV1626_GAMETWENTYONE_H
