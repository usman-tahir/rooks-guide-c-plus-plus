#include <iostream>
using namespace std;

class Person {
  private:
    string name;
    int age;
  public:
    string get_name() {
      return name;
    }

    int get_age() {
      return age;
    }

    void set_name(string name) {
      this->name = name;
    }

    void set_age(int age) {
      this->age = age;
    }
};

int main() {
  Person usman;
  usman.set_name("Usman Tahir");
  usman.set_age(22);
  cout << usman.get_name() << " is " << usman.get_age() << " years old." << endl;
}