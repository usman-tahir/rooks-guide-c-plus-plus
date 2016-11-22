#include <iostream>
using namespace std;

class Area {
  private:
    int length;
    int width;
  public:
    // Constructor
    Area(): length(0), width(0) {}
    Area(int length, int width) {
      this->length = length;
      this->width = width;
    }

    void getLength() {
      cout << "\nEnter the length: ";
      cin >> this->length;

      cout << "Enter the width: ";
      cin >> this->width; 
    }

    int area() {
      return (this->length * this->width);
    }

    void displayArea(int area) {
      cout << "Area: " << area << endl;
    }
};

int main() {
  Area a, b, c(10, 10);

  a.getLength();
  b.getLength();
  int areaA = a.area();
  int areaB = b.area();
  int areaC = c.area();
  a.displayArea(areaA);
  b.displayArea(areaB);
  c.displayArea(areaC);
}