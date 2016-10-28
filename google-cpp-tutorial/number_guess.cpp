
/**
 * A number guessing game in which the user guesses the random number.
 */
 #include <iostream>
 #include <time.h>
 using namespace std;

 int main() {
     int random_number, guess;

     // Initialize the random seed
     srand(time(NULL));

     // Generate a random number between 1 and 100
     random_number = rand() % 100 + 1;

     do {
         cout << "Guess a number between 1 and 100 inclusive: ";
         if (!(cin >> guess)) {
             cout << "Please enter only numbers.";
         } else {
             if (random_number < guess) {
                 cout << "The secret number is lower than " << guess << endl;
             } else if (random_number > guess) {
                 cout << "The random number is higher than " << guess << endl;
             }
         }
     } while (random_number != guess);
     cout << "You guessed it! The number was: " << random_number << endl;
     return 0;
 }