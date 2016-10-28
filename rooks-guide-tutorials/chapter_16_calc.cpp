#include <iostream>
#include "chapter_16_calc.h"
using namespace std;

int main() {
  double a, b;

  cout << "Enter the first number: ";
  cin >> a;

  cout << "\nEnter the second number: ";
  cin >> b;

  cout << a << " + " << b << " = " << add(a, b) << endl;
  cout << a << " - " << b << " = " << subtract(a, b) << endl;
  cout << a << " * " << b << " = " << multiply(a, b) << endl;
  cout << a << " / " << b << " = " << divide(a, b) << endl;

  return 0;
}