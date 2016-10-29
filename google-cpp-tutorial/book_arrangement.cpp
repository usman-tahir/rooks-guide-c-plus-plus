
#include <iostream>
using namespace std;

int factorial(int number);

int factorial(int number) {
  if (number == 0 || number == 1) {
    return number;
  } else {
    return number * factorial(number - 1);
  }
}

int main() {
  int number_of_books = 0;
  // Determine the number of books that need to be arranged
  do {
    cout << "Enter the number of books to arrange (left to right): ";
    if (!(cin >> number_of_books)) {
      cout << "Please enter a valid, non-negative, non-zero number.";
      cin.clear();
      cin.ignore(10000, '\n');
    } else if (number_of_books <= 0) {
      cout << "Please enter a non-negative, non-zero number.";
    }
  } while (number_of_books <= 0);
  cout << "You need to arrange: " << number_of_books << " books." << endl;
  cout << "You can arrange them " << factorial(number_of_books) << " different ways." << endl;
}