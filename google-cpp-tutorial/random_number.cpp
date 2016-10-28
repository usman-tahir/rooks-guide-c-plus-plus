
#include <iostream>
#include <time.h>
using namespace std;

int main() {
    int random_number;

    // Initialize the seed for the random number
    srand(time(NULL));

    // Generate a random number between 1 and 100
    random_number = rand() % 100 + 1;

    cout << "Random number: " << random_number << endl;

    return 0;
}