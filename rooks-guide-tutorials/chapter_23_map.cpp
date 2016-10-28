#include <iostream>
#include <map>
using namespace std;

int main() {
  // Declare an array of ten integers
  int myArray[10];
  myArray[0] = -1; // Default initialization

  map<string, int> students;
  students["Usman"] = 22;
  students["John"] = 19;
  students["James"] = 23;
  students["Sarah"] = 21;
  students["Clive"] = 22;

    // Sample printout
    string name = "Usman";
    cout << name << " is " << students[name] << " years old." << endl;

    for (auto &item : students) {
      cout << item.first << " is " << item.second << " years old." << endl;
    }


  return 0;
}