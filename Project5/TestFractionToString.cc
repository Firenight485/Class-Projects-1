// Copyright 2022 CSCE240 hipp
#include<fraction.h>
using csce240_program5::Fraction;
#include<iostream>
using std::cout;
using std::endl;

int main() {
  const Fraction half(1, 2);
  const Fraction twothirds(2, 3);
  const Fraction negativethird(-1, 3);

  if ( half.ToString() == "1/2" )
    cout << "passed first ToString test" << endl;
  else
    cout << "failed first ToString test" << endl;

  if ( twothirds.ToString() == "2/3" )
    cout << "passed second ToString test" << endl;
  else
    cout << "failed second ToString test" << endl;

  if ( negativethird.ToString() == "-1/3" )
    cout << "passed third ToString test" << endl;
  else
    cout << "failed third ToString test" << endl;

  return 0;
}
