// Copyright 2022 CSCE240 hipp
#include<fraction.h>
using csce240_program5::Fraction;
#include<iostream>
using std::cout;
using std::endl;

int main() {
  Fraction firstCheck(1, 2);
  const Fraction firstCheckCorrect(5, 2);
  Fraction secondCheck(7, 4);
  const Fraction secondCheckCorrect(-7, 2);
  const Fraction thirdCheckCorrect;

  firstCheck.Multiply(5);
  if ( firstCheck == firstCheckCorrect )
    cout << "passed first Multiply test" << endl;
  else
    cout << "failed first Multiply test" << endl;

  secondCheck.Multiply(-2);
  if ( secondCheck == secondCheckCorrect )
    cout << "passed second Multiply test" << endl;
  else
    cout << "failed second Multiply test" << endl;

  secondCheck.Multiply(0);
  if ( secondCheck == thirdCheckCorrect )
    cout << "passed third Multiply test" << endl;
  else
    cout << "failed third Multiply test" << endl;

  return 0;
}
