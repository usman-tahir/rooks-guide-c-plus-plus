#include <iostream>
using namespace std;

// Function declaration/prototype
double profit(int cost, double price);

double profit(int cost, double price) {
  double p = price - cost;
  return p;
}

int main() {
  double a, b;
  int c;

  // Get the manufacturing price of the item
  cout << "Enter the manufacturing cost of the item: ";
  cin >> c;

  // Get the retail price of the item
  cout << "\nEnter the retail price of the item: ";
  cin >> b;

  a = profit(c, b);
  if (a > 0) {
    cout << "\nThe profit made on this item is: $" << a << endl; // Profit
  } else {
    cout << "\nThe profit made on this item is: -$" << (a * -1) << endl; //Los
  }

  return 0;
}