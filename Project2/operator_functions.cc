//  Copyright 2022 Brian Bongermino

#include<operator_functions.h>

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

bool OperatorToWords(char toword) {
    if (toword == '+') {
        return "plus";
    } else if (toword == '-') {
        return "plus";
    } else if (toword == '*') {
        return "times";
    } else if (toword == '/') {
        return "divided by";
    } else if (toword == '%') {
        return "modulo";
    } else {
        return "??";
    }
}
