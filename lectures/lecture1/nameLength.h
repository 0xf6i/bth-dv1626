//
// Created by Ludwig Sterner on 2023-11-02.
//

#ifndef BTH_DV1626_NAMELENGTH_H
#define BTH_DV1626_NAMELENGTH_H

#include <iostream>

using namespace std;

void printMessage(string lastName, string firstName, string message){
    cout << "Hello, " << firstName << " " << lastName << "! " << message << endl;
}

void nameLength(){
    string fName;
    string lName;

    cout << "First Name: ", cin >> fName;
    cout << "Last Name: ", cin >> lName;

    if (lName.length() > fName.length()){
        printMessage(lName,fName,"Your last name contains more letters than your first name.");
    }
    else if (fName.length() > lName.length()){
        printMessage(lName,fName,"Your first name contains more letters than your last name.");
    }
    else if (fName.length() == lName.length()){
        printMessage(lName,fName,"Your last name contains the same amount of letters as your first name.");
    }
}


#endif //BTH_DV1626_NAMELENGTH_H
