#include <iostream>
using namespace std;

int main() {
  int input_one, input_two;

  cout << "Enter a number: ";
  cin >> input_one;

  cout << "\nEnter a number: ";
  cin >> input_two;

  if (input_one > input_two) {
    cout << input_one << " is greater than " << input_two << endl;
  } else if (input_one < input_two) {
    cout << input_two << " is greater than " << input_one << endl;
  } else {
    cout << input_one << " is equal to " << input_two << endl;
  }

  return 0;
}