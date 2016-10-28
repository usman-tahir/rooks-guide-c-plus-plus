#include <iostream>
using namespace std;

int main() {
  int numbers[5] = {1, 2, 3, 4, 5};

  // Display the elements in the numbers array
  int index;
  for (index = 0; index < sizeof(numbers) / sizeof(*numbers); index++) {
    cout << "numbers[" << index << "] = " << numbers[index] << endl;
  }

  // Array of letters from a string
  char name[] = "Usman Tahir";
  cout << name << endl;

  // Display each element from the string
  for (index = 0; index < sizeof(name) / sizeof(*name); index++) {
    cout << (char)name[index] << endl; // Last space at the end is the null terminator, '\0'
  }

  return 0;
}