
#include <iostream>
using namespace std;

int main() {
  // Determine the number of horses
  for (int h = 0; h < 100; h++) {
    // Determine the number of pigs
    for (int p = 0; p < 100; p++) {
      // Determine the number of rabbits
      for (int r = 0; r < 100; r++) {
        // Determine if the number of animals bought matches the expected number
        if ((h + p + r) == 100) {
          // If the price for all the animals bought matches the expected number
          if (((10 * h) + (3 * p) + (0.50 * r)) == 100) {
            cout << "\n--- Possible solution --" << endl;
            cout << "The number of horses bought was: " << h << endl;
            cout << "The number of pigs bought was: " << p << endl;
            cout << "The number of rabbits bought was: " << r << endl;
          }
        }
      }
    }
  }
}