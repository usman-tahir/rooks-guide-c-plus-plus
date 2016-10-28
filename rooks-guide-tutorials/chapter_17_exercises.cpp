#include <iostream>
#include <cmath>
using namespace std;

int main() {
  double a = 3.0, b = 4.0;
  double c; // Hypotenuse

  // Use the Pythagorean Theorem
  double sides = pow(a, 2) + pow(b, 2);
  c = (double)pow(sides, 0.5);

  cout << "The hypotenuse of a triangle with sides 3 and 4 is: " << c << endl;
}