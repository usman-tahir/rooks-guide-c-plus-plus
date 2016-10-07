#include <iostream>
using namespace std;

int main() {
  int counter;

  for (counter = 0; counter < 5; counter++) {
    cout << "The for loop counter is currently on loop " << (counter + 1) << " of 5." << endl;
  }
  return 0;
}