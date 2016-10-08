#include <iostream>
using namespace std;

// Prototype for the void message printing function
void displayMessage();

void displayMessage() {
  cout << "The calculation has been completed." << endl;
}
int main() {
  // Declare and initialize variables
  int x = 2, y;
  y = x + 1;

  cout << "y = " << y << endl;
  displayMessage(); 

  return 0;
}