#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
  // Declare a pointer to a float, which currently points nowhere
  float *floatPointer = NULL;
  
  floatPointer = new float; // Allows the dynamic allocation of an object of type float

  // Goes to the address at floatPointer and sets the associated value to 2.2
  *floatPointer = 2.2;

  cout << "Data at " << floatPointer << ": " << *floatPointer << endl;

  // Frees up the dynamically-allocated memory at the address stored in floatPointer
  delete(floatPointer);

  // Dynamically-allocated arrays

  // Allocate an array of ten floats and store their location in intPointer
  int *intPointer = new int[10];

  // Free up the entire array
  delete [] intPointer;

  return 0;
}