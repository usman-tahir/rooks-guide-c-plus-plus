#include <iostream>
using namespace std;

int main() {
  int divideBy, remaining, test;
  cout << "List of primes up to 100: " << endl;
  
  for (test = 2; test < 100; test++) {
    bool isPrime = true;
    for (divideBy = 2; divideBy < test; divideBy++) {
      remaining = test % divideBy;
      if (remaining == 0) {
        isPrime = false;
        break;
      }
    }
    if (isPrime) {
      cout << " " << test << endl;
    }
  }

  return 0;
}