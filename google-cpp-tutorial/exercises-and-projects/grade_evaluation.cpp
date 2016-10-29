/**
 * A program for calculating the final grade based on the following schema:
 * Assignments: 10% each (4)
 * Midterm: 15% (1)
 * Final: 35% (1)
 * Participation: 10% (1)
 */

#include <iostream>
using namespace std;

#define ASSIGNMENT_WEIGHT 10.00
#define MIDTERM_WEIGHT 15.00
#define FINAL_WEIGHT 35.00
#define PARTICIPATION_WEIGHT 10.00

double getGrade(string gradeType) {
  double grade = -1.00;
  do {
    cout << "Enter the grade for " << gradeType << ": ";
    if (!(cin >> grade)) {
      cout << "Please enter a non-negative, numeric input.";
      cin.clear();
      cin.ignore(10000, '\n');
    } else if (grade < 0) {
      cout << "Please enter a non-negative input.";
    }
  } while (grade < 0);
  return grade;
}

int main() {
  // Gather the data from the user

  // Get the four assignment grades and apply the weight to them
  double assignment_one_grade = getGrade("Assignment 1") * ASSIGNMENT_WEIGHT;
  double assignment_two_grade = getGrade("Assignment 2") * ASSIGNMENT_WEIGHT;
  double assignment_three_grade = getGrade("Assignment 3") * ASSIGNMENT_WEIGHT;
  double assignment_four_grade = getGrade("Assignment 4") * ASSIGNMENT_WEIGHT;

  // Get the midterm and final grades
  double midterm_grade = getGrade("the Midterm") * MIDTERM_WEIGHT;
  double final_grade = getGrade("the Final") * FINAL_WEIGHT;

  // Get the participation grade
  double participation_grade = getGrade("Participation") * PARTICIPATION_WEIGHT;

  double totalGrade = (assignment_one_grade + assignment_two_grade + assignment_three_grade + assignment_four_grade);
  totalGrade += (midterm_grade + final_grade + participation_grade);

  cout << "Your final grade for this course would be a(n) " << totalGrade / 100.00 << "%" << endl;
  return 0;
}