//
// Created by Ludwig Sterner on 2023-11-10.
//

#include "./functions.h"
#include <iostream>
using namespace std;


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
