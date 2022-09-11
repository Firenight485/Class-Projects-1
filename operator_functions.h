//  Copyright 2022 Brian Bongermino

#ifndef OPERATORFUNCTIONS_H_
#define OPERATORFUNCTIONS_H_

#include<string>
#include<cmath>

using std::string;

bool IsInteger(double);

bool IsArithmeticOperator(char arithmetic);

string OperatorToWords(char ToWord);

bool Compute(const double &x, char arth, const double &y, double &answer);


#endif // OPERATORFUNCTIONS_H_