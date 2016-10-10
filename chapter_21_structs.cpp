#include <iostream>
using namespace std;

struct Point {
  int x;
  int y;
};

void description(Point point);
Point createPoint(int x, int y);

void description(Point point) {
  cout << "This point is located at (" << point.x << ", " << point.y << ")." << endl;
}

Point createPoint(int x, int y) {
  Point tempPoint;
  tempPoint.x = x;
  tempPoint.y = y;

  return tempPoint;
}

int main() {
  // Create a new Point object
  Point point;
  point.x = 2;
  point.y = 2;

  Point secondPoint = createPoint(2, 3);

  description(point);
  description(secondPoint);

  return 0;
}