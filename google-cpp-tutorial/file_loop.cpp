// A program that demonstrates file processing and looping through input/output

#include <fstream>
#include <iostream>
using namespace std;

int main() {
  char first_name[30], last_name[30], file_name[20], done;
  int age;

  // Get the name of the file
  cout << "Enter the name of the file: ";
  cin >> file_name;

  // Create an ofstream called People_out, and open the stream for output
  ofstream People_out(file_name, ios::out);

  // Ask for the data
  cout << endl << "Enter your data." << endl;

  while (1) {
    cout << "Enter the first name: ";
    cin >> first_name;

    cout << "Enter the last name: ";
    cin >> last_name;

    cout << "Enter the age: ";
    cin >> age;

    // Write the data to the People_out stream
    People_out << first_name << " " << last_name << " " << age << endl;

    // Determine if the user wants to continue
    cout << "Enter another person? (Y/N): ";
    cin >> done;
    if (done == 'N' || done == 'n') {
      break;
    }
  }
  People_out.close();

  // Create an ifstream (People_in) to read from the file
  ifstream People_in(file_name);

  cout << "\n--- Data in the file ---" << endl;
  while (1) {
    People_in >> first_name >> last_name >> age;
    if (People_in.eof()) {
      break;
    }
    cout << "First name: " << first_name << "\nLast name: " << last_name << "\nAge: " << age << endl;
    cout << endl;
  }
  // Close the ifstream
  People_in.close();
  return 0;
}