#include <iostream>
#include <string>
using namespace std;

int main() {
  string myString;
  int stringLength;

  cout << "Please enter a string: ";
  getline(cin, myString);
  stringLength = myString.length();

  cout << "The string you entered was '" << myString << "' and it is " << stringLength << " characters long." << endl;

  // find() and rfind()
  // NOTE: Switch the following letters based on the string that is input
  string findFromBeginning = "o";
  string findFromEnd = findFromBeginning;

  cout << "Searching from the beginning, the letter 'o' appears at index " << myString.find(findFromBeginning) << "." << endl;
  cout << "Searching from the end, the letter 'o' appears at index " << myString.rfind(findFromEnd) << "." << endl;
  return 0;
}