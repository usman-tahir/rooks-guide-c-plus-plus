#include <iostream>
using namespace std;

int main() {
  int choice;
  double a = 5.1, b = 4.2;

  cout << "<1> Addition\n<2> Subtraction\n<3> Compare\n";
  cout << "Enter a choice form the list above:\t";
  cin >> choice;

  switch(choice) {
    case 1:
      cout << "The result of the addition is: " << (a + b) << endl << endl;
      break;
    case 2:
      cout << "The result of the subtraction is: " << (a - b) << endl << endl;
      break;
    case 3:
      if (a > b) {
        cout << "a is greater than b" << endl;
      } else if (a < b) {
        cout << "a is less than b" << endl;
      } else { // a == b
        cout << "a equals b" << endl;
      }
      break;
    default:
      cout << "You picked an invalid option.";
      break;
  }

  return 0;
}