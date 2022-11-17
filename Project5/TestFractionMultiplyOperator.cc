// Copyright 2022 CSCE240 hipp
#include<fraction.h>
using csce240_program5::Fraction;
#include<iostream>
using std::cout;
using std::endl;

int main() {
  const Fraction half(3, 6);
  const Fraction twothirds(8, 12);
  const Fraction negativethird(-1, 3);
  const Fraction onethird(1, 3);
  const Fraction negativesixth(-1, 6);
  const Fraction zero;

  if ( half * twothirds == onethird )
    cout << "passed first * test" << endl;
  else
    cout << "failed first * test" << endl;

  if ( half * negativethird == negativesixth )
    cout << "passed second * test" << endl;
  else
    cout << "failed second * test" << endl;

  if ( onethird * zero == zero )
    cout << "passed third * test" << endl;
  else
    cout << "failed third * test" << endl;

  return 0;
}
