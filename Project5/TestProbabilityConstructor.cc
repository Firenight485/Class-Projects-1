// Copyright 2022 CSCE240 hipp
#include<fraction.h>
using csce240_program5::Fraction;
#include<probability.h>
using csce240_program5::Probability;
#include<iostream>
using std::cout;
using std::endl;

int main() {
  const Probability half1(1, 2);
  const Fraction fhalf2(2, 4);
  const Probability half2(fhalf2);
  const Probability tenelevenths1(10, 11);
  const Probability tenelevenths2(70, 77);
  const Probability four(4);
  const Probability negative3(3, -1);
  const Fraction fracnegativefifth(-1, 5);
  const Probability negativefifth(fracnegativefifth);
  const Probability zero;

  if ( half1 == half2 )
    cout << "passed 1/2 == 1/2 test" << endl;
  else
    cout << "failed 1/2 == 1/2 test" << endl;

  if ( tenelevenths1 == tenelevenths2 )
    cout << "passed 10/11 == 70/77 test" << endl;
  else
    cout << "failed 10/11 == 70/77 test" << endl;

  if ( four == zero )
    cout << "passed probability of 4 test" << endl;
  else
    cout << "failed probability of 4 test" << endl;

  if ( negative3 == zero )
    cout << "passed probability of -3 test" << endl;
  else
    cout << "failed probability of -3 test" << endl;

  if ( negativefifth == zero )
    cout << "passed probability of -1/5 test" << endl;
  else
    cout << "failed probability of -1/5 test" << endl;

  return 0;
}
