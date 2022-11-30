// copyright 2022 Brian Bongermino
// implement Probability class functionality here
#include<probability.h>
#include<fraction.h>
#include<iostream>
namespace csce240_program5 {
    // default constructor
    Probability::Probability(int num, int dom) {
        if (num < 0 || dom < 0) {
            Probability(0);
        } else {
        Probability::SetNumerator(num);
        Probability::SetDenominator(dom);
        }
    }
    // default constructor for a fraction and and if they're compatible
    Probability::Probability(Fraction f) {
        if (f.GetNumerator() < 0 || f.GetDenominator() < 0) {
            Probability(0);
        }
    }
    // overloads the == to compare fractions and probababilities
    bool Probability::operator==(const Fraction& f1) const {
        Probability p1;
        if (p1.GetNumerator() * f1.GetDenominator() == p1.GetNumerator()
        * f1.GetNumerator()) {
            return true;
        } else {
            return false;
        }
    }
    //  A converts the probablity to odds and returns it as x:y
    string Probability::OddsInFavor() const {
        string numer = std::to_string(GetNumerator());
        int denom = (GetDenominator() - GetNumerator());
        string dem = std::to_string(denom);
        string odds = numer + ":" + dem;
        return odds;
    }
}  // end namespace csce240_program5
