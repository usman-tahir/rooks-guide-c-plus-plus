#include <iostream>
using namespace std;

int main() {

  // While loop that increments x to 30
  int x, y = 0, temp = 0;
  
  while (x < 30) {
    x += 3;
  }
  cout << "After being incremented by 3 from 0, x = " << x << endl;

  // Read in values until y >= 20
  do {
    cout << "Enter a number to add to y (currently " << y << "):  ";
    cin >> temp;
    // If the correct data type is not entered
    if (cin.fail()) {
      cout << "You did not enter an integer. " << endl;
    } else {
      y += temp; // Add the temporary value (user input) to y
    }
  } while (y < 20);
  cout << "After adding to y, y = " << y << endl;

  return 0;
}