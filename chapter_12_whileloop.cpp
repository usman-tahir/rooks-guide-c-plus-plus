#include <iostream>
using namespace std;

int main() {
  int i = 10; // Initializes i at 10
  
  cout << "T-minus ";

  // while loop is ended when i is less than 0
  while (i > 0) {
    cout << i << endl;
    i--;
  }
  cout << "Lift off!" << endl;

  return 0;
}