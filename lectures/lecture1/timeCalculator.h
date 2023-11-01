//
// Created by Ludwig Sterner on 2023-11-02.
//

#ifndef BTH_DV1626_TIMECALCULATOR_H
#define BTH_DV1626_TIMECALCULATOR_H
#include <iostream>

using namespace std;


int timeCalculator() {

    int startHours, startMinutes, startSeconds;
    int goalHour, goalMinute, goalSecond;

    cout << "Start \n";
    cout << "Hour: ", cin >> startHours;
    cout << "Minutes: ", cin >> startMinutes;
    cout << "Seconds: ", cin >> startSeconds;

    cout << "End \n";
    cout << "Hour: ", cin >> goalHour;
    cout << "Minutes: ", cin >> goalMinute;
    cout << "Seconds: ", cin >> goalSecond;

    int elapsedTimeInSeconds = (goalHour - startHours) * 3600 + (goalMinute - startMinutes) * 60 + (goalSecond - startSeconds);

    int hours = elapsedTimeInSeconds / 3600;
    int minutes = (elapsedTimeInSeconds % 3600) / 60;
    int seconds = elapsedTimeInSeconds % 60;

    cout << "Your race time is: " << hours << " hour(s) " << minutes << " minute(s) " << seconds << " second(s)" << endl;

    return 0;
}



#endif //BTH_DV1626_TIMECALCULATOR_H
