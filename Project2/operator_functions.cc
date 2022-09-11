//  Copyright 2022 Brian Bongermino

#include<operator_functions.h>
#include<iostream>
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

bool Compute(const double &x, char arth, const double &y, double &answer) {
    int xi = x;
    int yi = y;
    switch (arth)
    {
    case '+':
        answer = (x + y);
        return true;
        break;
    case '-':
        answer = (x - y);
        return true;  
        break;
    case '*':        
        answer = (x * y);
        return true;
        break;
    case '/':
        if (x == 0 || y == 0) {
            return false;
        } else {
            answer = (x /y);
            return true;
        }
        break;
    case '%':
        if (xi == 0 || yi == 0){
            answer = 0;
            return false;
        } else if (xi == x && yi == y) {
            answer = (xi % yi);
            return true;
        } 
        break;
    default:
        return false;
    }
    return 0;
} 
