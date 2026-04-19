/*2. (Multiple Inheritance) Write a C++ program to read and print employee information using
multiple inheritance.
*/
#include <iostream>
using namespace std;

// ____ Personal Class
class Personal {
  protected:
    string name;
    int age;

  public:
    void getPersonal() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Age: ";
        cin >> age;
    }
};

// ____ Professional Class
class Professional {
  protected:
    int id;
    float salary;

  public:
    void getProfessional() {
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter Salary: ";
        cin >> salary;
    }
};

// ____ Employee Class from Personal Class and Professional Class
class Employee : public Personal, public Professional {
  public:
    void display() {
        cout << "\nName: " << name;
        cout << "\nAge: " << age;
        cout << "\nID: " << id;
        cout << "\nSalary: " << salary << endl;
    }
};

// _____ Main Function
int main() {
    Employee e;
    e.getPersonal();
    e.getProfessional();
    e.display();
    return 0;
}