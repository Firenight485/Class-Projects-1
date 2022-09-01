// Copyright 2022 Brian Bongermino

#include<iostream>
#include<cmath>
using std::cout;
using std::cin;
using std::endl;
int main() {
    int input, base;
    int unique_digits = 0;

    cin >> input >> base;
    //  Checks if the base is less than 9 or
    //  if the base is less than 2
    if (base <= 9 || base >= 2) {
        for (int i = 0; i < 10; ++i) {
            int split =  input % 10;
            input /= 10;

            std::cout << split << endl;
        }
        //  cout << pow() << endl;
    }
    //  Checks if the base is less than 9 or
    //  if the base is less than 2
    if (base > 9 || base < 2) {
        cout << "Base Not Accepted" << endl;
    }
    return 0;
}