#include <iostream>
using namespace std;

int main() {
  const int NUMBER = 600851475143;
  int factor = 0;

  for (int i = 2; ; i++) {
    if(NUMBER % i == 0 && i > factor) {
      factor = i;
    }
  }
  cout << "factor: " << factor << endl;

  return 0;
}