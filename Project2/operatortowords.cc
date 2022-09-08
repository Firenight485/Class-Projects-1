//  Copyright 2022 Brian Bongermino

#include<operator_functions.h>

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