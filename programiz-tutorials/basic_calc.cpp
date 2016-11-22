#include <iostream>
#include <cmath>
using namespace std;

int add(int, int);
float add(float, float);

int subtract(int, int);
float subtract(float, float);

int multiply(int, int);
float multiply(float, float);

int divide(int, int);
float divide(float, float);

int add(int a, int b) {
  return a + b;
}

float add(float a, float b) {
  return a + b;
}

int subtract(int a, int b) {
  return a - b;
}

float subtract(float a, float b) {
  return a - b;
}

int multiply(int a, int b) {
  return a * b;
}

float multiply(float a, float b) {
  return a * b;
}

int divide(int a, int b) {
  if (b == 0) {
    cout << "Error: You cannot divide by 0" << endl;
  } else {
    return a / b;
  }
}

float divide(float a, float b) {
  if (b == 0) {
    cout << "Error: You cannot divide by 0" << endl;
  } else {
    return a / b;
  }
}

int main() {
  string menu = "1. Add\n2. Subtract\n3. Multiply\n4. Divide\n";
  int choice;
  
  cout << "Select a choice from below:\n" << menu;
  cin >> choice;

  if (choice >= 1 || choice <= 4) {
    float numOne, numTwo;
    cout << "Enter the first number: ";
    cin >> numOne;
    cout << "Enter the second number: ";
    cin >> numTwo;

    switch (choice) {
      case 1:
        cout << numOne << " + " << numTwo << " = " << add(numOne, numTwo) << endl;
        break;
      case 2:
        cout << numOne << " - " << numTwo << " = " << subtract(numOne, numTwo) << endl;
        break;
      case 3:
        cout << numOne << " * " << numTwo << " = " << multiply(numOne, numTwo) << endl;
        break;
      case 4:
        cout << numOne << " / " << numTwo << " = " << divide(numOne, numTwo) << endl;
        break;
    }
  } else {
    cout << "You entered an invalid choice." << endl;
  }
  return 0;
}