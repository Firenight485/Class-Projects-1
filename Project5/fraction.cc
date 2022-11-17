// implement Fraction class functionality here
#include<fraction.h>
#include<iostream>

namespace csce240_program5 {
    Fraction::Fraction(int num, int dom) {
        SetNumerator(num);
        SetDenominator(dom);
    }

    bool operator == (const Fraction& num, const Fraction& dom) {
        if ((num.GetNumerator() && num.GetDenominator() == 
        num.GetDenominator() && num.GetDenominator())) {
            return true;
        } else {
            return false;
        }
    }

    double Fraction::ToDecimal() const {
        double numer = numerator_;
        double denom = denominator_;
        double answer = numer / denom;
        return answer;
    }

    int Fraction::Multiply(int mult)  {
        
    }

    int Fraction::SetNumerator(int num) {
        numerator_ = num;
    }

    int Fraction::SetDenominator(int dom) {
        denominator_ = dom;
    }
    
} // end namespace csce240_program 
