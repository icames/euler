#include <iostream>
using namespace std;

int main() {
  int termOne = 1;
  int termTwo = 2;
  int termThree = termOne + termTwo;
  int sum = 2;

  while(termThree < 4000000) {
    if(termThree % 2 == 0) {
      sum += termThree;
    }
    termThree = termOne + termTwo;
    termOne = termTwo;
    termTwo = termThree;
  }
  cout << "Sum: " << sum << endl;
  return 0;
}