// Copyright 2022 CSCE240 hipp
#include<probability.h>
using csce240_program5::Probability;
#include<iostream>
using std::cout;
using std::endl;

int main() {
  const Probability half1(1, 2);
  const Probability half2(2, 4);
  const Probability zero;

  if ( half1.ToDecimal() == 0.5 )
    cout << "passed 1/2 ToDecimal test" << endl;
  else
    cout << "failed 1/2 ToDecimal test" << endl;

  if ( half2.ToDecimal() == 0.5 )
    cout << "passed 2/4 ToDecimal test" << endl;
  else
    cout << "failed 2/4 ToDecimal test" << endl;

  if ( zero.ToDecimal() == 0 )
    cout << "passed 0/1 ToDecimal test" << endl;
  else
    cout << "failed 0/1 ToDecimal test" << endl;

  return 0;
}
