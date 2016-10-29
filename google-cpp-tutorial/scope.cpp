/**
 * A program to illustrate the concept of scope
 */
#include <iostream>
using namespace std;

/**
 * The following two variables are global - that is, they are
 * available inside any function in the program. If there is
 * a local variable of the same name (either a or b) in a
 * function, then the local variable overrides the global one.
 * It is typically not a good idea to use global variables, as
 * they can be hard to track.
 */
int a = 18;
int b = 6;

/**
 * This function assigns 'a' and 'b' to the incoming parameters.
 * Notice that the local value of 'b' in main is passed in as 'a',
 * and the global value of 'a' is passed in as 'b'.
 */
int functionOne(int a, int b) {
  return a - b;
}

/**
 * This function adds the two global variables, 'a' and 'b', together,
 * and assigns the sum to a local variable 'c'. This value is then
 * returned. The 'c' variable is no longer available once this function
 * has completed its execution.
 */
int functionTwo() {
  int c;
  c = a + b;
  return c;
}

int main() {
  // The global variable value for 'b' is overridden with the following local
  // variable.
  int b = 12;
  // A variable called 'c' is initialized, which is different from the one
  // declared in functionTwo()
  int c = 0;
  // The global variable 'a' is assigned (12 - 18 = -6) in the following line.
  a = functionOne(b, a);
  // The local variable 'c' is assigned the sum of the two global variables. Note
  // that the previous line modified the global variable 'a', which now equals -6.
  // Thus, 'c' has the value of (-6 + 6 = 0).
  c = functionTwo();
  // The values of the global value 'a' is printed out (-6), as well as the two local
  // variables 'b' (12) and 'c' (0).
  cout << "a: " << a << " b: " << b << " c: " << c << endl;
  return 0;
}