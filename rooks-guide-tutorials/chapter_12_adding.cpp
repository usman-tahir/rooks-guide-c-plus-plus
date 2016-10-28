#include <iostream>
using namespace std;

int main() {
  int sum = 0, temp;

  cout << "Enter a number greater than 0 to begin: ";
  cin >> temp;

  while (temp != 0) {
    sum += temp;
    cout << endl << "Current total: " << sum << endl;

    cout << "Add another number? If yes, input a nonzero integer. If no, input 0." << endl;
    cin >> temp;
  }

  return 0;
}