//
// Created by Ludwig Sterner on 2023-11-03.
//

#ifndef BTH_DV1626_OCCURANCECOUNTER_H
#define BTH_DV1626_OCCURANCECOUNTER_H
#include <iostream>
#include <random>

using namespace std;

void occuranceCounter() {

    int counts[6] = {0};

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> distribution(1, 6);

    int amountRuns;

    cout << "How many rolls? ", cin >> amountRuns;

    int randomNumber;

    for (int i = 0; i < amountRuns; i++){
        randomNumber = distribution(gen);
        counts[randomNumber - 1]++;
        cout << randomNumber << " ";
    }
    cout << endl;

    for (int i = 0; i < 6; ++i) {
        cout << i + 1 << ": ";
        for (int j = 0; j < counts[i]; ++j) {
            cout << "*";
        }
        cout << endl;
    }

};


#endif //BTH_DV1626_OCCURANCECOUNTER_H
