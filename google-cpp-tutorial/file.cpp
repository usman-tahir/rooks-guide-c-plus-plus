// A file processing example

#include <fstream>
#include <iostream>
using namespace std;

int main() {
  char first_name[30], last_name[30], file_name[20];
  int age;

  // Collect the data from the user
  cout << "Enter the first name: ";
  cin >> first_name;

  cout << "Enter the last name: ";
  cin >> last_name;

  cout << "Enter the age: ";
  cin >> age;

  cout << endl << "Enter the name of the file: ";
  cin >> file_name;

  // Create an ofstream called People, and open the stream for output
  ofstream People(file_name, ios::out);
  
  // Write the output to the stream (overwrites the file)
  People << first_name << " " << last_name << " " << age << endl;
  cout << "The data has been written to the file." << endl;

  // Close the stream
  People.close();

  // Create an ifstream to read the file
  ifstream People_in(file_name);
  People_in >> first_name >> last_name >> age;

  cout << "\n--- Data from the file ---" << endl;
  cout << "First name: " << first_name << endl;
  cout << "Last name: " << last_name << endl;
  cout << "Age: " << age << endl;

  // Close the stream
  People_in.close();
  return 0;
}