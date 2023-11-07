//
// Created by Ludwig Sterner on 2023-11-03.
//

#ifndef BTH_DV1626_LEAPYEARCHECKER_H
#define BTH_DV1626_LEAPYEARCHECKER_H
#include <iostream>

using namespace std;

void leapYearChecker() {

    int year;
    cout << "What year would you like to check? ", cin >> year;
    (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) ?
    cout << year << " is a leap year." :
    cout << year << " is not a leap year.";

};


#endif //BTH_DV1626_LEAPYEARCHECKER_H
