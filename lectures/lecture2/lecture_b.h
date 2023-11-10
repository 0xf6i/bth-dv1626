//
// Created by Ludwig Sterner on 2023-11-10.
//

#ifndef BTH_DV1626_LECTURE_B_H
#define BTH_DV1626_LECTURE_B_H
#include <iostream>

using namespace std;

void demo(int nrOne, int &nrTwo);
void demoTwo(const string &str);
void print(string str, int nrOfTimes=5);
float area(float radius);
float area(float height, float width);

int lecture_b() {

    int nr1 = 8;
    int nr2 = 6;
    demo(nr1, nr2);
    cout << nr1 << " " << nr2 << endl;
    print("Hello", 17);
    print("Hello world");
   /* const int CAP = 3;
    int nrs[CAP]{0};
    */

   int* nrs = nullptr;
   int capacity = 0;

   cout << "Input the capacity of the array";
   cin >> capacity;
   cin.ignore();
   nrs = new int[capacity] {0};

    return 0;
}

void demo(int nrOne, int& nrTwo) {
    nrOne++;
    nrTwo++;
}

void demoTwo(const string &str){

}


#endif //BTH_DV1626_LECTURE_B_H
