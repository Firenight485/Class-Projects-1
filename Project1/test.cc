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

    cin >> input;
    //  Checks if the base is less than 9 or
    //  if the base is less than 2
     while(input != 0) {
    remainder = input % 10;
    reversed_input = reversed_input * 10 + remainder;
    input /= 10;
  }
    cout << reversed_input;

    /*temp = input;
    while (temp != 0) {
        count++;
        temp /=10;
    }
    raise = count;
    if (base < 10 || base > 1) {
        /**
         * @brief splits and raises the input 
         * 
         */
        /*while (input > 0) {
            split = input % 10;
            output = output + split*pow(base, --raise);
            input = input / 10;
        }
            cout << output << endl;
    }
    //  Checks if the base is less than 9 or
    //  if the base is less than 2
    if (base > 9 || base < 2) {
        cout << "Base Not Accepted" << endl;
    }*/
    return 0;
}
