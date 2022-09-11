#include<iostream>

double Compute(double x, char arth, double y, double answer);

int main(){
    double x;
    double y;
    char arth;
    int sum;

    std::cin >> x >> arth >> y;
}

double Compute(double x, char arth, double y, double answer) {
    double sum;
    answer = 0;
    if (arth == '+') {
        sum = (x + y);
        return answer + sum;
    }
} 
