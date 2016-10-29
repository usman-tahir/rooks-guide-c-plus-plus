
#include <iostream>
using namespace std;

int main() {
  string string_one = "To be or not to be, that is the question";
  string string_two = "only ";
  string string_three = string_one.substr(6, 12);
  string_one.insert(32, string_two);
  string_one.replace(string_one.find("to be", 0), 5, "to jump");
  string_one.erase(9, 4);
  cout << string_one << endl;
  for (int i = 0; i < string_three.length(); i++) {
    cout << string_three[i];
    cout << endl;
  }
}