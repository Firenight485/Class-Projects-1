// Copyright 2022 CSCE240 hipp
#include<probability.h>
using csce240_program5::Probability;
#include<iostream>
using std::cout;
using std::endl;

int main() {
  const Probability half(3, 6);
  const Probability twothirds(8, 12);
  const Probability negativethird(-1, 3);
  const Probability onethird(1, 3);
  const Probability negativesixth(-1, 6);
  const Probability zero;

  if ( half * twothirds == onethird )
    cout << "passed first * test" << endl;
  else
    cout << "failed first * test" << endl;

  if ( half * negativethird == zero )
    cout << "passed second * test" << endl;
  else
    cout << "failed second * test" << endl;

  if ( onethird * zero == zero )
    cout << "passed third * test" << endl;
  else
    cout << "failed third * test" << endl;

  return 0;
}
