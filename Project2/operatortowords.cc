//  copyright 2022 brian bongermino

#include<functions.h>

bool operatortowords(char toword) {
    if (toword = 'plus') {
        return '+';
    } else if (toword = 'minus') {
        return '-';
    } else if (toword = 'times') {
        return '*';
    } else if (toword = 'divided by') {
        return '/';
    } else if (toword = 'modulo'){
        return '%';
    } else {
        return '???';
    }
}