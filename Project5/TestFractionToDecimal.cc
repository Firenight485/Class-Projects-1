// Copyright 2022 CSCE240 hipp
#include<fraction.h>
using csce240_program5::Fraction;
#include<iostream>
using std::cout;
using std::endl;

int main() {
  const Fraction half1(1, 2);
  const Fraction half2(2, 4);
  const Fraction negative8fifths(-8, 5);
  const Fraction zero;

  if ( half1.ToDecimal() == 0.5 )
    cout << "passed 1/2 ToDecimal test" << endl;
  else
    cout << "failed 1/2 ToDecimal test" << endl;

  if ( half2.ToDecimal() == 0.5 )
    cout << "passed 2/4 ToDecimal test" << endl;
  else
    cout << "failed 2/4 ToDecimal test" << endl;

  if ( negative8fifths.ToDecimal() == -1.6 )
    cout << "passed -8/5 ToDecimal test" << endl;
  else
    cout << "failed -8/5 ToDecimal test" << endl;

  if ( zero.ToDecimal() == 0 )
    cout << "passed 0/1 ToDecimal test" << endl;
  else
    cout << "failed 0/1 ToDecimal test" << endl;

  return 0;
}
