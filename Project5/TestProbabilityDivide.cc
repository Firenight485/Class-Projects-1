// Copyright 2022 CSCE240 hipp
#include<probability.h>
using csce240_program5::Probability;
#include<iostream>
using std::cout;
using std::endl;

int main() {
  Probability firstCheck(1, 2);
  const Probability firstCheckCorrect(1, 10);
  Probability secondCheck(7, 4);
  const Probability secondCheckCorrect(7, 4);
  Probability thirdCheck(3, 5);
  const Probability thirdCheckCorrect(3, 5);

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
