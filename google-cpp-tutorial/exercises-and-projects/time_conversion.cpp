/**
 * Takes an amount of time (in seconds) and converts it into hours, minutes
 * and seconds
 */

#include <iostream>
using namespace std;

#define SECONDS_PER_HOUR 3600
#define SECONDS_PER_MINUTE 60

int getInitialTime() {
  int initialTime = -1;
  do {
    cout << "Please enter the number of seconds to convert: ";
    if (!(cin >> initialTime)) {
      cout << "Please enter a numeric input." << endl;
    } else if (initialTime < 0) {
      cout << "Please enter a non-negative input." << endl;
    }
  } while (initialTime < 0);
  return initialTime;
}

int getHours(int initialTime) {
  if (!(initialTime >= SECONDS_PER_HOUR)) {
    return 0;
  } else {
    return 1 + getHours(initialTime - SECONDS_PER_HOUR);
  }
}

int getMinutes(int time) {
  if (!(time >= SECONDS_PER_MINUTE)) {
    return 0;
  } else {
    return 1 + getMinutes(time - SECONDS_PER_MINUTE);
  }
}

void printTimeBreakdown(int initialTime, int hours, int minutes) {
  int subtractedHours = SECONDS_PER_HOUR * hours;
  int subtractedMinutes = SECONDS_PER_MINUTE * minutes;
  int seconds = (initialTime - (subtractedHours + subtractedMinutes));

  cout << "Hours: " << hours << "\nMinutes: " << minutes << "\nSeconds: " << seconds << endl;
}

int main() {
  int initialTime = getInitialTime();
  
  // Get the number of hours
  int hours = getHours(initialTime);

  // Get the number of minutes
  int minutes = getMinutes(initialTime - (hours * SECONDS_PER_HOUR));

  printTimeBreakdown(initialTime, hours, minutes);
  return 0;
}