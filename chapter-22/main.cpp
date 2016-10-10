#include <iostream>
#include "student.cpp"
using namespace std;

int main() {
  // Create the new Student Object
  Student studentOne;
  studentOne.setName("Usman Tahir");
  studentOne.setAge(22);

  studentOne.description();

  // Create an additional Student Object (studentId should be 2)
  Student studentTwo("John Doe", 19);

  studentTwo.description();

  return 0;
}