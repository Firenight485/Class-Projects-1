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

    //  takes in both the base and user input
    cin >> input >> base;

    //  flips the order of input
     while (input != 0) {
    remainder = input % 10;
    reversed_input = reversed_input * 10 + remainder;
    input /= 10;
    }
    //  a check for binary and sets it equal to the
    // reversed input
    reverse_input_binary = reversed_input;
    temp = reversed_input;
    //  creates an interative varible
    while (temp != 0) {
        count++;
        temp /=10;
    }
    raise = count;
    // checks if base is within the paramaters
    if (base > 9 || base < 2) {
        cout << "Base Not Accepted" << endl;
        //  checks if base is equal to 2
    } else if (base == 2) {
        //  while loop for checking if the input
        //  is binary
        while (reversed_input > 0) {
            binary = reversed_input%10;
            //  checks if the input is not binary
            if (binary != 0 && binary !=1) {
                cout << "Invalid Digit(s) In Number" << endl;
                break;
            }
            reversed_input = reversed_input/10;
            while (reversed_input == temp) {
                /**
                 *   checks if the input is binary and if it is 
                 *   it raises it to a decending power and outputs
                 *   the varibles added together
                 */
                while (reverse_input_binary > 0) {
                    splitBinary = reverse_input_binary % 10;
                    output = output + splitBinary*pow(base, --raise);
                    reverse_input_binary = reverse_input_binary / 10;
                }
                cout << output << endl;
                break;
            }
        }
        //  checks if base is within working range
     } else if (base <= 9 || base < 2)  {
        //  checks if the input is positive or negative
         while (reversed_input > 0 || reversed_input < 0) {
            //  splits the varible and raises each indivudal part
            //  to a power depending on order from right to left
            //  and outputs it to the console
            split = reversed_input % 10;
            output = output + split*pow(base, --raise);
            reversed_input = reversed_input / 10;
        }
            cout << output << endl;
    }
    return 0;
}
