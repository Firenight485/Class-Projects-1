//  Copyright 2022 Brian Bongermino

#include<operator_functions.h>
#include<string>

using std::string;

bool IsInteger(double num1) {
    int trunc = num1;

    if (trunc == num1) {
        return true;
    } else {
        return false;
    }
}

bool IsArithmeticOperator(char arithmetic) {
    if ((arithmetic == '+') || (arithmetic == '-') || (arithmetic == '*') ||
    (arithmetic == '%') || (arithmetic == '*')) {
        return true;
    } else {
        return false;
    }
}

string OperatorToWords(char ToWord) {
    if (ToWord == '+') {
        return "plus";
    } else if (ToWord == '-') {
        return "minus";
    } else if (ToWord == '*') {
        return "times";
    } else if (ToWord == '/') {
        return "divided by"; 
    } else if (ToWord == '%') {
        return "modulo";
    } else {
        return "??";
    }
}
