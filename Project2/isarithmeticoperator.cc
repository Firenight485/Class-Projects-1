//  Copyright 2022 Brian Bongermino

#include <functions.h>

bool isoperator(char arithmetic) {
    if (arithmetic = '+') {
        return true;
    } else if (arithmetic = '-') {
        return true;
    } else if (arithmetic = '/'){
        return true;
    } else if (arithmetic = '*') {
        return true;
    } else if (arithmetic = '&') {
        return true;
    } else {
        return false;
    }
}