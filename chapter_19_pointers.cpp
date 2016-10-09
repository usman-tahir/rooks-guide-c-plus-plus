#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
  // Declare an int pointer
  int *p;

  // Declare an int, and give it a value
  int variableOne = 1;

  // Take the address of variableOne and store it in p
  p = &variableOne;

  // Go to the address stored in p
  cout << *p << endl;

  // Display the address
  cout << p << endl;

  /*
   * Example using memory mapping to change the value of the stored variable
   * in one variable, to the value of another
   */
   int *pointer;
   int variableTwo = 5, variableThree = 10;
   p = &variableTwo; // Store the address of variableTwo in p

   cout << "Before the reassignment, *p contains " << *p << endl;

   *p = variableThree; // Go to the address stored in p, and assign it the value of variableThree;

   cout << "After the reassignment, *p contains " << *p << endl;
  
  return 0;
}