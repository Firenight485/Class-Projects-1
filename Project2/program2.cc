// Copyright 2022 Brian Bongermino

#include<operator_functions.h>

#include<iostream>
#include<fstream>

using std::cin;
using std::cout;
using std::endl;

/**
 * takes in a text file and outputs it in a valid form
 */
int main() {
    double x, y, answer;
    char arth;
    std::ifstream input_file("arithmetic_expressions.txt");
    input_file >> x >> arth >> y;
    while (input_file.good()) {
        if (Compute(x, arth, y, answer)) {
            //  outputs valid equations
            cout << x << " " << OperatorToWords(arth) << " " << y << " equals"
            << " " << answer << endl;
            //  checks if the arithmetic is invalid and
            //  outputs it as unrecgonized
    }  else if (IsArithmeticOperator(arth) == false) {
        cout << "Unrecognized operation " << arth << endl;
    } else {
        //  outputs the invalid inputs
        cout << "Could not compute " << x << " "
        << OperatorToWords(arth) << " " << y << endl;
    }
        input_file >> x >> arth >> y;
    }
    input_file.close();
    return 0;
}

