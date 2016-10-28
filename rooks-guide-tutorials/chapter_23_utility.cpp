#include <iostream>
#include <utility>
#include <tuple>
using namespace std;

int main() {
  // Create a pair consisting of a Student ID and GPA
  pair<int, float> info = make_pair(1234567, 3.9);

  cout << "Student ID: " << info.first << "\nGPA: " << info.second << endl;

  return 0;
}