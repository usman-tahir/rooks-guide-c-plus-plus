#include <iostream>
using namespace std;

int main() {
  int a;
  double b;
  string c;

  // Ask for an integer
  cout << "Please enter an integer:  ";
  cin >> a;

  if (cin.fail()) {
    cout << "\nYou did not enter an integer.\n";
  } else {
    cout << "You entered: " << a << endl;
  }

  // Ask for a double
  cout << "Please enter a double: ";
  cin >> b;

  if (cin.fail()) {
    cout << "\nYou did not enter a double.\n";
  } else {
    cout << "You entered: " << b << endl;
  }

  // Ask for a string
  cout << "Please enter a string: ";
  cin >> c;

  if (cin.fail()) {
    cout << "\nYou did not enter a string.";
  } else {
    cout << "You entered: " << c << endl;
  }

  return 0;
}