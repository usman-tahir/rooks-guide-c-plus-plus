#include <iostream>
using namespace std;

int main() {
  double shots, goals, saves;
  double save_percentage;
  // char repeat;

  /*
  cout.unsetf(ios::fixed);
  cout.unsetf(ios::showpoint);
  */
  
  cout << "Enter the number of attempted shots: ";
  cin >> shots;

  cout << "\nEnter the number of goals scored: ";
  cin >> goals;

  cout << endl;

  saves = shots - goals;
  // Hockey shows the save percentage as a decimal to three places
  save_percentage = (saves / shots);

  cout << "If there were " << shots << " shots, and " << goals 
    << " goals, then the goalie's save percentage was ";

  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);

  cout.precision(3);

  cout << save_percentage << endl << endl;

  return 0;
}