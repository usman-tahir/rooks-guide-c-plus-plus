#include <iostream>
using namespace std;

int main() {
  // Declare and initialize the time variable (type int)
  int time;
  cout << "Enter the time: ";
  cin >> time;

  // Determine the distance in seconds
  int answer = (32 * time * time) / 2;

  // Print out the result
  cout << "The distance is ";
  cout << answer << " seconds\n";

  return 0;
}