
#include <iostream>
using namespace std;

int main() {
    /**
     * Enter the do while loop and stay inside it until a non-numeric
     * input is entered, or -1 is entered.
     */
     int input_var = 0;
     do {
         cout << "Enter a number, or -1 to quit: ";

         /**
          * The following line accepts input from the keyboard into
          * the variable input_var
          *
          * cin returns false if an input operation fails, that is, if
          * something other than an int (the type of input_var) is
          * entered.
          */

          if (!(cin >> input_var)) {
              cout << "You entered a non-numeric input." << endl;
              break;
              // Exit the do while loop
          }

          if (input_var != -1) {
              cout << "You entered " << input_var << endl;
          }
     } while (input_var != -1);
     cout << "The program will now exit." << endl;
     return 0;
}