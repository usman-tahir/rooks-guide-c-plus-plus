#include <iostream>
#include <string>
using namespace std;

int main() {
  string myString, myLetter;

  cout << "Please enter a string: ";
  getline(cin, myString);
  cout << "\nYou entered: " << myString << endl;

  // Ask the user for a letter to search
  cout << "Enter a letter to search in this string: ";
  getline(cin, myLetter);

  int indexOfLetter = myString.find(myLetter);

  if (indexOfLetter >= 0) {
    cout << "Your letter (" << myLetter << ") was found at index " << indexOfLetter << "." << endl;
  } else {
    cout << "That letter was not found in the string '" << myString << "'." << endl;
  }

  return 0;
}