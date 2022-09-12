//  Copyright 2022 Brian Bongermino
//  contains all functions used in program 2
#ifndef OPERATOR_FUNCTIONS_H_
#define OPERATORFUNCTIONS_H_


#include<string>
#include<cmath>

using std::string;

/**
 * function will take in an integer and truncate it
 * and checks if the truncated function is equal to the original
 * input
 * precondition: the function will be sent one double
 * postcondtion: the fuction will check if the value is equal to the input 
 *             if it is then the function will return true, else, the function will
 *             return false
 */ 
bool IsInteger(double num1);
/**
 * function will take a character and check if its a valid arithmetic number
 * precondtion: the function will be sent a character
 * postcondtion: the function will check if the input is valid, if it is then it will
 *             return true, or else it will return false.
 */
bool IsArithmeticOperator(char arithmetic);
/**
 * function will take in a character and check if the arithmetic is valid and convert
 * to a word corresponding to the input.
 * precondtion: the function will take in a character
 * postcondition: the function will check if the arithmetic is valid, if it is then the 
 *              function will convert it to a string corresponding to the input
 */
string OperatorToWords(char ToWord);
/**
 * function will compute valid arithmetic inputs
 * precondition: the function will take in two double, a character, and output it to a 
 *             double. 
 * postcondtion: the function will complete a expression, if its valid it will output it to 
 *             the double answer and return true. If it isn't valid it will set answer to zero and 
 *             return false.
 */
bool Compute(const double &x, char arth, const double &y, double &answer);


#endif  //  OPERATOR_FUNCTIONS_H_
