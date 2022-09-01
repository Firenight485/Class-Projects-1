// Copyright 2022 Brian Bongermino

#include<iostream>
#include<cmath>
using std::cout;
using std::cin;
using std::endl;
int main() {
    int input, base, split;
    int output = 0;

    cin >> input >> base;
    //  Checks if the base is less than 9 or
    //  if the base is less than 2
    if (base <= 9 || base >= 2) {
        //  output for positive
        while (input > 0 || input < 0) {
            split = input % 10;
            output = output + (split*pow(base, 2));
            input = input / 10;
        }
            cout << output << endl;
    }
    //  Checks if the base is less than 9 or
    //  if the base is less than 2
    if (base > 9 || base < 2) {
        cout << "Base Not Accepted" << endl;
    }
    return 0;
}