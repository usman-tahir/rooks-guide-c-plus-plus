#include <iostream>
using namespace std;

class Rectangle {
  public:
    Rectangle(); // A default constructor
    // Mutators
    void setBase(float length);
    void setHeight(float length);
    // Accessors
    float getBase();
    float getHeight();
    // Operations
    float findArea();
    float findPerimeter();
  private:
    float base;
    float height;
};

Rectangle::Rectangle() {
  base = 0;
  height = 0;
}

void Rectangle::setBase(float length) {
  base = length;
}

void Rectangle::setHeight(float length) {
  height = length;
}

float Rectangle::getBase() {
  return base;
}

float Rectangle::getHeight() {
  return height;
}

float Rectangle::findArea() {
  return (base * height);
}

float Rectangle:: findPerimeter() {
  return ((base * 2) + (height * 2));
}

int main() {
  // Create a new Rectangle
  Rectangle r;
  float b, h;

  // Get the base and the height of the Rectangle
  cout << "Please enter the length of the Rectangle's base: ";
  cin >> b;

  cout << "\nPlease enter the length of the Rectangle's height: ";
  cin >> h;

  r.setBase(b);
  r.setHeight(h);

  cout << "A rectangle with a base of  " << r.getBase() << " and a height of " << r.getHeight() << " has the following measurements:" << endl;
  cout << "Area: " << r.findArea() << endl << "Perimeter: " << r.findPerimeter() << endl;

  return 0;
}