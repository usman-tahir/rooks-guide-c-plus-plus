#include <iostream>
using namespace std;

int main() {
  // Assign the result of an integer division to a float
  float a = 12 / 6;

  cout << "a = " << a << endl;

  // Precision of 5
  double sampleSize = 14.58093;

  // Increase sampleSize by 12.495 (precision of 3)
  sampleSize += 12.495;

  // Outputs a precision of 4
  cout << "sampleSize = " << sampleSize << endl;

  // Precision of 5
  sampleSize += 12.49589;

  // Outputs a precision of 4
  cout << "sampleSize = " << sampleSize << endl;

  return 0;
}