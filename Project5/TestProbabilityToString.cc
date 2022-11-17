// Copyright 2022 CSCE240 hipp
#include<probability.h>
using csce240_program5::Probability;
#include<iostream>
using std::cout;
using std::endl;

int main() {
  const Probability half(1, 2);
  const Probability twothirds(2, 3);

  if ( half.ToString() == "1/2" )
    cout << "passed first ToString test" << endl;
  else
    cout << "failed first ToString test" << endl;

  if ( twothirds.ToString() == "2/3" )
    cout << "passed second ToString test" << endl;
  else
    cout << "failed second ToString test" << endl;

  if ( half.OddsInFavor() == "1:1" )
    cout << "passed first OddsInFavor test" << endl;
  else
    cout << "failed first OddsInFavor test" << endl;

  if ( twothirds.OddsInFavor() == "2:1" )
    cout << "passed second OddsInFavor test" << endl;
  else
    cout << "failed second OddsInFavor test" << endl;

  return 0;
}
