#include <iostream>
using namespace std;

int main() {
  // Declare an integer array named Int with a size of 10
  int myInt[10];

  /* 
   * Declare a character array named myArray with a size of 4, and initialize
   * the characters in the array to 'Z', 'a', 'c', and 'h'
   */
   char myName[4] = {'Z', 'a', 'c', 'h'};

   /* 
    * Create a program in which an integer array named myArray is declared with a
    * size of 10. Use a for loop to prompt the user to store a value in every
    * index of the array. After the array is given values, output the values of
    * the array to the screen using a for loop. Output each value of the array on
    * its own line.
    */
    int myArray[10];
    int index;

    // Prompt user for integer input
    cout << "Enter 10 integers; press [ENTER] between each entry." << endl;
    for (index = 0; index < 10; index++) {
      cin >> myArray[index];
    }

    // Print out the numbers from the array
    for (index = 0; index < 10; index++) {
      cout << "myArray[" << index << "] = " << myArray[index] << endl;
    }


  return 0;
}