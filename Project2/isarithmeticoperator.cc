//  Copyright 2022 Brian Bongermino

#include<operator_functions.h>

bool IsArithmeticOperator(char arithmetic) {
    if ((arithmetic == '+') || (arithmetic == '-') || (arithmetic == '*') ||
    (arithmetic == '%') || (arithmetic == '*')) {
        return true;
    } else {
        return false;
    }
}
