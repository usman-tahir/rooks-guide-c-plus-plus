#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
  // Declare the variables for the program
  double shots, goals, saves, save_percentage;
  char repeat;

  // Initiate the do-while loop to loop the program while the user wants to repeat it
  do {
    // Unset the fixed and showpoint (show decimal) input formatters temporarily
    cout.unsetf(ios::fixed);
    cout.unsetf(ios::showpoint);

    // Ask the user for the number of attempted shots, and the number of goals
    cout << "Enter the number of attempted shots:\t";
    cin >> shots;
    cout << "Enter the number of goals scored:\t";
    cin >> goals;
    cout << endl;

    // Determine the number of saves the goalie made, as well as the save percentage
    saves = shots - goals;
    save_percentage = (saves / shots);

    // Print out the results
    cout << "If there were " << shots << " shots and " << goals << " goals\n";
    cout << "then the goalie's save percentage was ";

    // Set the formatting for cout (temporarily unset above)
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(3);

    cout << save_percentage << endl << endl;

    // Determine if the user wants to re-run the program
    cout << "Run again? (Y/N)\t";
    cin >> repeat;
    repeat = toupper(repeat);
  } while (repeat == 'Y');

  return 0;
}