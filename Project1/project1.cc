// Copyright 2022 Brian Bongermino

#include<iostream>
using std::cout;
using std::cin;
using std::endl;
int main() {
    int input, base, n;
    int unique_digits = 0;

    cin >> input >> base;
    //  Checks if the base is less than 9 or
    //  if the base is less than 2
    if (base < 9 || base > 2) {
        cout << "sample text";
    }
    //  Checks if the base is less than 9 or
    //  if the base is less than 2
    if (base > 9 || base < 2) {
        cout << "Base Not Accepted" << endl;
    }
    return 0;
}
