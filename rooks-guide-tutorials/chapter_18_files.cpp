#include <iostream>
#include <fstream>
using namespace std;

int main() {
  // Declares a variable of type ifstream, called inFile
  ifstream inFile;

  // Declares a variable of type ofstream called outFile
  ofstream outFile;

  // Opens a text file for input
  inFile.open("input.txt");
  string line;
  if (inFile.is_open()) {
    while (getline(inFile, line)) {
      cout << line << endl;
    }
    inFile.close();
  }

  // Creates a text file for output
  outFile.open("output.txt");

  // Write to the file
  string outputText = "Write this to the file.";
  outFile << outputText << endl;
  outFile.close();

  return 0;
}