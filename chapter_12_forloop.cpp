#include <iostream>
using namespace std;

int main() {
  int counter;
  // Initialization, guard, incrementor / decrementor
  for (counter = 0; counter < 5; counter++) {
    // (counter + 1) addresses the zero-indexing convention
    cout << "The for loop counter is currently on loop " << (counter + 1) << " of 5." << endl;
  }

  return 0;
}