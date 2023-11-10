//
// Created by Ludwig Sterner on 2023-11-10.
//

#ifndef BTH_DV1626_FUNCTIONS_H
#define BTH_DV1626_FUNCTIONS_H
#include <string>

using namespace std;


void inputNames(int nrOf,string iceCreams[]);
void grades(string iceCreams[], int grade[], int nrOf);
void presentResult(string iceCreams[], int grade[], int nrOfIceCreams, int nrOfGrades);
int highestGrade(int grade[], int nrOfIceCreams);
int lowestGrade(int grade[], int nrOfIceCreams);
int find(string iceCreams[], int nrOfIceCreams, string toSearchFor);


class functions {

};


#endif //BTH_DV1626_FUNCTIONS_H
