#include <iostream>
using namespace std;

int main() {
  char repeat;

  do {
    cout << "Hello World!" << endl;
    cout << "Do you want to display the message again? (Y/N): " << endl;
    cin >> repeat;
    repeat = toupper(repeat);

    if (repeat != 'Y' || repeat != 'N') {
      cout << "You entered an invalid choice." << endl;
    }
  } while (repeat == 'Y');

  return 0;
}