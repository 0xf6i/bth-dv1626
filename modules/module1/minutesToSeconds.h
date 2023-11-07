//
// Created by Ludwig Sterner on 2023-11-01.
//

#ifndef BTH_DV1626_MINUTESTOSECONDS_H
#define BTH_DV1626_MINUTESTOSECONDS_H
#include <iostream>

//CODE BENEATH

int minutesToSeconds(int minutes, int seconds) {

    int totalSeconds;
    totalSeconds = minutes * 60;
    totalSeconds += seconds;

    std::cout << totalSeconds;
    return 0;
};


#endif //BTH_DV1626_MINUTESTOSECONDS_H
