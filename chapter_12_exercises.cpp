#include <iostream>
using namespace std;

int main() {

  // While loop that increments x to 30
  int x;
  
  while (x < 30) {
    x += 3;
  }
  cout << "After being incremented by 3 from 0, x = " << x << endl;

  // Read in values until y >= 20
  int y = 0;
  int temp = 0;

  do {
    cout << "Enter a number to add to y (currently " << y << "):  ";
    cin >> temp;
    if (cin.fail()) {
      cout << "You did not enter an integer. " << endl;
    } else {
      y += temp;
    }
  } while (y < 20);
  cout << "After adding to y, y = " << y << endl;

  return 0;
}