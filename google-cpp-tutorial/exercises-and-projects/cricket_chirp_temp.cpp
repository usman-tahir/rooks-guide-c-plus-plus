/**
 * Detemines the temperature by the number of field cricket chirps per minute
*/

#include <iostream>
using namespace std;

double convertChirpsToTemp(int numberOfChirps) {
  int tempChirps = numberOfChirps + 40;
  return (tempChirps / 4.00);
}

int main() {
  int numberOfChirps = -1;

  cout << "Enter the number of field cricket chirps: ";
  do {
    if (!(cin >> numberOfChirps)) {
      cout << "Please enter a non-negative, numeric input.";
      cin.clear();
      cin.ignore(10000, '\n');
    } else if (numberOfChirps < 0) {
      cout << "Please enter a non-negative input.";
    }
  } while (numberOfChirps < 0);
  
  cout << "The current temperature is: " << convertChirpsToTemp(numberOfChirps) << " degrees." << endl;
  return 0;
}