#include <iostream>
using namespace std;

int main() {
  // Declare an integer pointer and dynamically allocate it, then assign it the value of 13
  int *intPointer = new int;
  *intPointer = 13;

  int *a = new int[24];
  int *b;
  int c;

  b = &c;

  // Deallocate dynamically-allocated memory and set all pointer values to NULL
  delete [] a;
  a = NULL;
  b = NULL;

  return 0;
}