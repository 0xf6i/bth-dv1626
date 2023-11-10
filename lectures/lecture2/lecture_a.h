//
// Created by Ludwig Sterner on 2023-11-07.
//

#ifndef BTH_DV1626_LECTURE_A_H
#define BTH_DV1626_LECTURE_A_H
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void lecture() {

    ifstream inFile("/Users/0x/CLionProjects/bth-dv1626/lectures/lecture_b/file.txt");

   if (!inFile.is_open()) {
        cout << "File failed to open." << endl;
        return;
    }

    string word;
    inFile >> word;
    cout << word;

    while (inFile >> word){
        cout << word;
    }

    inFile.clear();
    inFile.seekg(0,inFile.beg);
    string line;
    while(getline(inFile,line)){
        cout << line << endl;
    }

    ofstream outFile("/Users/0x/CLionProjects/bth-dv1626/lectures/lecture_b/outfile.txt");

    if (!outFile)
    {
        cout << "Failed to open output file!";
        return;
    }
    else
    {
        outFile << "Hello there! \nNice weather today! \n";
        outFile.close();
    }

}

void testPointers(){
    int a = 10;
    int b = 20;

    int* ptr_a = nullptr;
    ptr_a = &a;

    cout << "a= " << a << endl;
    cout << "a= " << ptr_a << endl;

    ++a;

    cout << "a= " << a << endl;
    cout << "a= " << ptr_a << endl;

    (*ptr_a)++;

    cout << "a= " << a << endl;
    cout << "a= " << ptr_a << endl;

}
#endif //BTH_DV1626_LECTURE_A_H
