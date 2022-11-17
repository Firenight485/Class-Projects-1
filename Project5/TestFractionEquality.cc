// Copyright 2022 CSCE240 hipp
#include<fraction.h>
using csce240_program5::Fraction;
#include<iostream>
using std::cout;
using std::endl;

int main() {
  Fraction firstCheck(1, 2);
  const Fraction firstCheckCorrect(1, 10);
  Fraction secondCheck(7, 4);
  const Fraction secondCheckCorrect(-7, 8);
  Fraction thirdCheck(17, -13);
  const Fraction thirdCheckCorrect(-17, 13);

  firstCheck.Divide(5);
  if ( firstCheck == firstCheckCorrect )
    cout << "passed first Divide test" << endl;
  else
    cout << "failed first Divide test" << endl;

  secondCheck.Divide(-2);
  if ( secondCheck == secondCheckCorrect )
    cout << "passed second Divide test" << endl;
  else
    cout << "failed second Divide test" << endl;

  thirdCheck.Divide(0);
  if ( thirdCheck == thirdCheckCorrect )
    cout << "passed third Divide test" << endl;
  else
    cout << "failed third Divide test" << endl;

  return 0;
}
