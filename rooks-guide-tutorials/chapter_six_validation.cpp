#include <iostream>
using namespace std;

int main() {
  int x = 0;
  // int y = 0;

  cout << "Please enter an integer value for x: ";
  cin >> x;

  // Does not account for type-casting between types; only different types
  if (cin.fail()) {
    cout << "You did not enter an integer." << endl;
  } else {
    cout << "You entered: " << x << endl;
  }
  
  return 0;
}