//
// Created by Ludwig Sterner on 2023-11-10.
//

#ifndef BTH_DV1626_FUNCTIONS_H
#define BTH_DV1626_FUNCTIONS_H
#include "../t1m2/functions.cpp"

#include <iostream>
#include <string>
using namespace std;
//const int CAPACITY = 10;

int u1m1()
{
    char choice = 'Y';
//    string iceCreams[CAPACITY];
//    int gradings[CAPACITY]{ 0 };
    int nrOfIceCreams = 0;
    int nrOfGradings = 0;
    int bestIceCream = 0;
    int worstIceCream = 0;

    string *iceCreams= nullptr;
    float* gradings = nullptr;
    int capacity = 0;



    cout << "How many ice creams will be judged?";
    cin >> capacity;
    cin.ignore();

    iceCreams = new string[capacity];
    gradings = new float[capacity]{0.0f};

    inputNames(nrOfIceCreams,iceCreams);

    while (choice == 'Y' || choice =='y')
    {
        grades(iceCreams, gradings, nrOfIceCreams);
        nrOfGradings++;
        cout << "More gradings? (Y/N) ";
        cin >> choice;
    }

    presentResult(iceCreams, gradings, nrOfIceCreams, nrOfGradings);

    bestIceCream = highestGrade(gradings, nrOfIceCreams);
    worstIceCream = lowestGrade(gradings, nrOfIceCreams);

    cout << "\n\nThe ice cream with the highest grade is " << iceCreams[bestIceCream] << endl;
    cout << "The ice cream with the lowest grade is " << iceCreams[worstIceCream] << endl;

    delete[] iceCreams

    return 0;
}




#endif //BTH_DV1626_FUNCTIONS_H
