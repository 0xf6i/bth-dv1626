//
// Created by Ludwig Sterner on 2023-11-01.
//

#ifndef BTH_DV1626_CANDIVIDEBYSEVEN_H
#define BTH_DV1626_CANDIVIDEBYSEVEN_H

// CODE BENEATH

void canDivideBySeven(int a){
    bool status;
    // simplified if-statement (ternary operator)
    a % 7 == 0 ? status = true : status = false;
    status ? std::cout << "Can divide by seven" : std::cout << "Cannot divide by seven";
}


#endif //BTH_DV1626_CANDIVIDEBYSEVEN_H
