#include <string>
using namespace std;

class Student {

  public:
    Student();
    Student(string name, int age);
    
    string getName();
    int getAge();
    int getStudentId();

    void setName(string name);
    void setAge(int age);
    void updateStudentId(int id);

    void description();

  private:
    static int id;
    string name;
    int age;
    int studentId;
};

int Student::id = 0;