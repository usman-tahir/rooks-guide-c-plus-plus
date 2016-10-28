
int main() {
  // Declare a double variable named Feet. Initialize it to your height.
  double Feet = 5.10;

  // Declare a double constant named MetersPerFoot, with the value of 0.3048
  const double MetersPerFoot = 0.3048;

  // Declare a double variable named Meters. Set it to Feet multipled by 
  // MetersPerFoot.
  double Meters = (Feet * MetersPerFoot);

  // Create a program that displays the diameter and area of a circle for any
  // given radius. Use a const float to represent pi.
  float radius = 5;
  const float pi = 3.14159;
  double diameter, area;
  diameter = radius * 2;
  area = pi * (radius * radius);
}