/*Q4. Create a Subject and Student class. A student is enrolled in subject. Implement a
scenario if the subject is cancelled students will remain intact. (Use Aggregation)
*/
#include <iostream>
using namespace std;

// ____ Subject Class
class Subject {
  public:
    string subName;

    Subject(string n) {
        subName = n;
    }
};

// ____ Student Class
class Student {
    string name;
    Subject *subject; // Aggregation

  public:
    Student(string n, Subject *s) {
        name = n;
        subject = s;
    }

    void display() {
        cout << "\nStudent: " << name;
        cout << "\nSubject: " << subject->subName << endl;
    }
};

// ____ Main Function
int main() {
    Subject s1("OOP");

    Student st1("Ali", &s1);
    st1.display();

    // Subject removed (simulated)
    cout << "\nStudent still exists independently." << endl;
}