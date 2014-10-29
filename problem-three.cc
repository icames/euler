#include "../ttmath/ttmath.h"
#include <iostream>
using namespace std;

int main() {
  const long NUMBER = 600851475143;
  long factor = 0;

  for (long i = 2; ; i++) {
    if(NUMBER % i == 0 && i > factor) {
      factor = i;
    }
  }
  cout << "factor: " << factor << endl;

  return 0;
}