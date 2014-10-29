#include "ttmath-0.9.3/ttmath/ttmath.h"
#include <iostream>
using namespace std;

typedef ttmath::Big<1,2> MyBig;

int main() {
  MyBig NUMBER = 600851475143;
  MyBig factor = 0;

  for (MyBig i = 2; i < 40000; i++) {
    if(Mod(NUMBER, i) == 0 && i > factor) {
      factor = i;
    }
  }
  cout << "factor: " << factor << endl;

  return 0;
}