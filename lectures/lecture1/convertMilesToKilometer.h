//
// Created by Ludwig Sterner on 2023-11-01.
//

#ifndef BTH_DV1626_CONVERTMILESTOKILOMETER_H
#define BTH_DV1626_CONVERTMILESTOKILOMETER_H

// CODE BENEATH

float convertMilesToKilometer(int miles){
    float mileLength = 1.609344;
    float convertedMiles = miles * mileLength;

    return convertedMiles;
}


#endif //BTH_DV1626_CONVERTMILESTOKILOMETER_H
