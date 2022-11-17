// Copyright 2022 CSCE240 hipp
#include<probability.h>
using csce240_program5::Probability;
#include<iostream>
using std::cout;
using std::endl;

int main() {
  Probability firstCheck(1, 10);
  const Probability firstCheckCorrect(2, 5);
  Probability secondCheck(2, 3);
  const Probability secondCheckCorrect(2, 3);
  const Probability thirdCheckCorrect;
  Probability fourthCheck(3, 8);
  const Probability fourthCheckCorrect(3, 8);

  firstCheck.Multiply(4);
  if ( firstCheck == firstCheckCorrect )
    cout << "passed first Multiply test" << endl;
  else
    cout << "failed first Multiply test" << endl;

  secondCheck.Multiply(2);
  if ( secondCheck == secondCheckCorrect )
    cout << "passed second Multiply test" << endl;
  else
    cout << "failed second Multiply test" << endl;

  secondCheck.Multiply(0);
  if ( secondCheck == thirdCheckCorrect )
    cout << "passed third Multiply test" << endl;
  else
    cout << "failed third Multiply test" << endl;

  fourthCheck.Multiply(-3);
  if ( fourthCheck == fourthCheckCorrect )
    cout << "passed fourth Multiply test" << endl;
  else
    cout << "failed fourth Multiply test" << endl;

  return 0;
}
