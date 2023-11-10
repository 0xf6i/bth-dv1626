//
// Created by Ludwig Sterner on 2023-11-10.
//

#ifndef BTH_DV1626_ICECREAMGRADER_H
#define BTH_DV1626_ICECREAMGRADER_H

#include <iostream>
#include <string>
using namespace std;
const int CAPACITY = 10;

void inputNames(int nrOf,string iceCreams[]);
void grades(string iceCreams[], int grade[], int nrOf);
void presentResult(string iceCreams[], int grade[], int nrOfIceCreams, int nrOfGrades);
int highestGrade(int grade[], int nrOfIceCreams);
int lowestGrade(int grade[], int nrOfIceCreams);
int find(string iceCreams[], int nrOfIceCreams, string toSearchFor);

int iceCreamGrader()
{
    char choice = 'Y';
    string iceCreams[CAPACITY];
    int gradings[CAPACITY]{ 0 };
    int nrOfIceCreams = 0;
    int nrOfGradings = 0;
    int bestIceCream = 0;
    int worstIceCream = 0;

    cout << "How many ice creams will be judged? (max 10) ";
    cin >> nrOfIceCreams;
    cin.ignore();

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

    return 0;
}

void inputNames(int nrOf, string iceCreams[])
{
    cout << "\n\nInput the names of the " <<nrOf<<" ice creams : \n";

    for (int i = 0; i < nrOf; i++)
    {
        getline(cin, iceCreams[i]);
    }
}

void grades(string iceCreams[], int grade[], int nrOf)
{
    int theGrade = 0;
    cout << "\n\nGrade the ice creams: (1-5)\n";

    for (int i = 0; i < nrOf; i++)
    {
        cout << iceCreams[i] << ": ";
        cin >> theGrade;
        grade[i] += theGrade;
    }
}

void presentResult(string iceCreams[], int grade[], int nrOfIceCreams, int nrOfGrades)
{
    cout << "The average score for each iceacream is: \n\n";

    for (int i = 0; i < nrOfIceCreams; i++)
    {
        cout << iceCreams[i] << ": " << (float)grade[i] / nrOfGrades << endl;

    }

}

int highestGrade(int grade[], int nrOfIceCreams)
{
    int indexOfMax = 0;

    for (int i = 1; i < nrOfIceCreams; i++)
    {
        if (grade[i] > grade[indexOfMax])
        {
            indexOfMax = i;
        }
    }

    return indexOfMax;
}

int lowestGrade(int grade[], int nrOfIceCreams)
{
    int indexOfLowest = 0;

    for (int i = 1; i < nrOfIceCreams; i++)
    {
        if (grade[i] < grade[indexOfLowest])
        {
            indexOfLowest = i;
        }
    }

    return indexOfLowest;
}

int find(string iceCreams[], int nrOfIceCreams, string toSearchFor)
{
    int index = -1;

    for (int i = 0; i< nrOfIceCreams && index == -1; i++){
        if (iceCreams[i] == toSearchFor){
            index = i;
        }
    }

    return index;
}


#endif //BTH_DV1626_ICECREAMGRADER_H
