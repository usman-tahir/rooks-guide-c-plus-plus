/**
 * A program that manipulates a 'magic number' and outputs its
 */

#include <iostream>
using namespace std;

// Reverse a number
int reverseNumber(int number) {
  int output = 0;
  while (number > 0) {
    output = output * 10 + (number % 10);
    number = number / 10;
  }
  return output;
}

// Get numeric input from the user
int getUserInput() {
  int input = -1;
  do {
    cout << "Enter a number whose first digit is greater than its last: ";
    if (!(cin >> input)) {
      cout << "Please enter a numeric input." << endl;
      cin.clear();
      cin.ignore(10000, '\n');
    } else if (input <= 0) {
      cout << "Please enter a non-negative input." << endl;
    } else if (input <= reverseNumber(input)) {
      cout << "Please enter an input whose first digit is greater than its last." << endl;
    }
  } while (input < 0 || (input <= reverseNumber(input)));
  return input;
}

int main() {
  int number = getUserInput();
  int reversedNumber = reverseNumber(number);
  int firstSubtraction = (number - reversedNumber);
  cout << "input number: " << number << endl;
  cout << "reverse it: " << reversedNumber << endl;
  cout << "subtract: " << number << " - " << reversedNumber << " = " << firstSubtraction << endl;

  reversedNumber = reverseNumber(firstSubtraction);
  int firstAddition = (reversedNumber + firstSubtraction);
  cout << "reverse it: " << reversedNumber << endl;
  cout << "add: " << reversedNumber << " + " << firstSubtraction << " = " << firstAddition << endl;
  return 0;
}