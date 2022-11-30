// copyright 2022 Brian Bongermino
// implement Fraction class functionality here
#include<fraction.h>
#include<iostream>

namespace csce240_program5 {
    // Default Constructor
    Fraction::Fraction(int num, int dom) {
        SetNumerator(num);
        SetDenominator(dom);
    }
    // Overloads the == operator to check if the fractions are
    // equal to eachother, if they are then it returns true,
    // else it returns false.
    bool Fraction::operator==(const Fraction& f2) const {
       if (this->numerator_ * f2.denominator_ ==
        this->denominator_ * f2.numerator_) {
            return true;
        } else {
            return false;
        }
    }

    // divides the numerator by the denominator to get the
    // decimal form
    double Fraction::ToDecimal() const {
        double numer = numerator_;
        double denom = denominator_;
        double answer = numer / denom;
        return answer;
    }

    // multiplyes the numerator times the multiplied value
    int Fraction::Multiply(int mult)  {
        Fraction::SetNumerator(numerator_ * mult);
        return 0;
    }

    // overloads the * operator. it multiplies
    // straight across and returns the fraction.
    Fraction Fraction::operator*(const Fraction& f2) const {
        Fraction mult;
        mult.numerator_ = this->numerator_ * f2.numerator_;
        mult.denominator_ = this->denominator_ * f2.denominator_;
        return mult;
    }

    // divide function, checks if the value is less than zero,
    // if it is then it sets the numerator to be negative and multiplies
    // the denominator. if the divisor is greater than zero then the numerator
    // is multiplied. If the divisor is zero then it checks if the denom is zero
    // if its not then its multipled stragiht across, else the num and the denom
    // are set to zero
    int Fraction::Divide(int div) {
        if (div < 0) {
            numerator_ = numerator_ * -1;
            div = div * - 1;
            denominator_ = denominator_ * div;
            this->SetDenominator(denominator_);
            this->SetNumerator(numerator_);
        } else if (div > 0) {
            denominator_ = denominator_ * div;
        } else if (div == 0) {
            if (denominator_ < 0) {
                denominator_ = denominator_ * -1;
                numerator_ = numerator_ * -1;
                this->SetDenominator(denominator_);
                this->SetNumerator(numerator_);
            } else {
                this->SetNumerator(0);
                this->SetDenominator(0);
            }
        }
        return 0;
    }

    // sets the numerator
    void Fraction::SetNumerator(int num) {
        numerator_ = num;
    }

    // converts the numerator and the denominator to strings and
    // adds a / in between
    string Fraction::ToString() const {
       std::string n = std::to_string(numerator_);
       std::string d = std::to_string(denominator_);
       std::string fract = n + "/" + d;
       return fract;
    }

    // sets the denominator
    void Fraction::SetDenominator(int dom) {
        denominator_ = dom;
    }
}  // namespace csce240_program5

