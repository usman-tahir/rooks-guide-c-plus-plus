#include <iostream>
#include "student.h"
using namespace std;

Student::Student() {
  this->name = "";
  this->age = 0;
  this->studentId = ++Student::id;
}

Student::Student(string name, int age) {
  this->name = name;
  this->age = age;
  this->studentId = ++Student::id;
}

string Student::getName() {
  return this->name;
}

void Student::setName(string name) {
  this->name = name;
}

int Student::getAge() {
  return this->age;
}

void Student::setAge(int age) {
  this->age = age;
}

int Student::getStudentId() {
  return this->studentId;
}

void Student::updateStudentId(int id) {
  this->studentId = id;
}

void Student::description() {
  cout << "\nStudent ID: " << this->getStudentId() << "\nName: " << this->getName() << "\nAge: " << this->getAge() << endl;
}