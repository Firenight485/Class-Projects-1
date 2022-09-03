// Copyright 2022 Brian Bongermino

#include<iostream>
#include<cmath>

using std::cout;
using std::cin;
using std::endl;
int main() {
    int input, base, split, splitBinary, temp, remainder;
    int reversed_input = 0;
    int output = 0;
    int binary = 0;
    int raise = 0;
    int count = 0;
    int is_binary = 0;
    int reverse_input_binary = 0;

    cin >> input >> base;

     while (input != 0) {
    remainder = input % 10;
    reversed_input = reversed_input * 10 + remainder;
    input /= 10;
    }
    reverse_input_binary = reversed_input;
    temp = reversed_input;
    while (temp != 0) {
        count++;
        temp /=10;
    }
    raise = count;
    if (base > 9 || base < 2) {
        cout << "Base Not Accepted" << endl;
    } else if (base == 2) {
        while (reversed_input > 0) {
            binary = reversed_input%10;
            if (binary != 0 && binary !=1) {
                cout << "Invalid Digit(s) In Number";
                break;
            }
            reversed_input = reversed_input/10;
            while (reversed_input == temp) {
                while (reverse_input_binary > 0) {
                    splitBinary = reverse_input_binary % 10;
                    output = output + splitBinary*pow(base, --raise);
                    reverse_input_binary = reverse_input_binary / 10;
                }
                cout << output << endl;
                break;
            }
        }
     } else if (base <= 9 || base < 2)  {
         while (reversed_input > 0 || reversed_input < 0) {
            split = reversed_input % 10;
            output = output + split*pow(base, --raise);
            reversed_input = reversed_input / 10;
        }
            cout << output << endl;
    }
    return 0;
}
