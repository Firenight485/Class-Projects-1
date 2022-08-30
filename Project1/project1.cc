// Copyright 2022 Brian Bongermino

#include<iostream>
using std::cout;
using std::cin;
using std::endl;
int main() {
    int input, base;
    int unique_digits = 0;

    cout << "Please input a integer and a base" << endl;
    cin >> input >> base;
    //  Checks if the base is less than 9 or
    //  if the base is less than 2
    if (base > 9 || base < 2) {
        cout << "Base not accepted" << endl;
    }

    return 0;
}