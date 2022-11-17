// Copyright 2022 CSCE240 hipp
#include<fraction.h>
using csce240_program5::Fraction;
#include<iostream>
using std::cout;
using std::endl;

int main() {
  const Fraction half1(1, 2);
  const Fraction half2(1, 2);
  const Fraction half3(2, 4);
  const Fraction threequarters(3, 4);
  const Fraction tenelevenths1(10, 11);
  const Fraction tenelevenths2(70, 77);
  const Fraction four1(4);
  const Fraction four2(-20, -5);

  if ( half1 == half2 )
    cout << "passed 1/2 == 1/2 test" << endl;
  else
    cout << "failed 1/2 == 1/2 test" << endl;

  if ( half1 == half3 )
    cout << "passed 1/2 == 2/4 test" << endl;
  else
    cout << "failed 1/2 == 2/4 test" << endl;

  if ( half1 == threequarters )
    cout << "failed 1/2 == 3/4 test" << endl;
  else
    cout << "passed 1/2 == 3/4 test" << endl;

  if ( tenelevenths1 == tenelevenths2 )
    cout << "passed 10/11 == 70/77 test" << endl;
  else
    cout << "failed 10/11 == 70/77 test" << endl;

  if ( four1 == four2 )
    cout << "passed 4 == -20/-5 test" << endl;
  else
    cout << "failed 4 == -20/-5 test" << endl;
  return 0;
}
