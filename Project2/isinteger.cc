// Copyright 2022 Brian Bongermino

#include<functions.h>

bool isinteger(double num1) {
    int trunc = num1;

    if (trunc == num1) {
        return true;
    } else {
        return false;
    }
}
