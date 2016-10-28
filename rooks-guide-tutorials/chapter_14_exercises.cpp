#include <iostream>
using namespace std;

void guessingGame();

void guessingGame() {
  int guess, counter = 0, number = 5;
  bool found = false;

  do {
    cout << "Guess a number:\t";
    cin >> guess;

    if (guess > 100 || guess <= 0) {
      cout << "The number is between 1 and 100 -- Please try again." << endl;
      counter++;
    } else if (guess < number) {
      cout << "Too low. Please try again." << endl;
      counter++;
    } else if (guess > number) {
      cout << "Too high. Please try again." << endl;
      counter++;
    } else {
      cout << "You guessed it! The number was: " << number << endl;
      found = true;
      counter++;
    }
  } while (!found);

  cout << "It took you " << counter << " guesses." << endl;
}

int main() {
  guessingGame();
}