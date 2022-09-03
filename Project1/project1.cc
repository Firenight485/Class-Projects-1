// Copyright 2022 Brian Bongermino

#include<iostream>
#include<cmath>
using std::cout;
using std::cin;
using std::endl;
int main() {
    int input, base, split, temp, remainder;
    int reversed_input = 0;
    int output = 0;
    int raise = 0;
    int count = 0;
    int unique_digits = 50;

    cin >> input >> base;

     while (input != 0) {
    remainder = input % 10;
    reversed_input = reversed_input * 10 + remainder;
    input /= 10;
    }
    temp = reversed_input;
    while (temp != 0) {
        count++;
        temp /=10;
    }
    raise = count;
    if (base > 9 || base < 2) {
        cout << "Base Not Accepted" << endl;
    } else {
         while (reversed_input > 0 || reversed_input < 0) {
            split = reversed_input % 10;
            output = output + split*pow(base, --raise);
            reversed_input = reversed_input / 10;
        }
            cout << output << endl;
    }
    return 0;
}
