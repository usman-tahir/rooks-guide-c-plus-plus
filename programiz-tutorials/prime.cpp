#include <iostream>
using namespace std;

void prime();

void prime() {
  int number, index, flag = 0;
  printf("Enter a positive integer to check if it is prime: ");
  cin >> number;

  for (index = 2; index <= number / 2; ++index) {
    if (number % index == 0) {
      flag = 1;
      break;
    }
  }
  if (flag == 1) {
    cout << "\n" << number << " is not a prime number." << endl;
  } else {
    cout << "\n" << number << " is a prime number." << endl;
  }
};

int main() {
  // No argument is passed to prime()
  prime();
  return 0;
}