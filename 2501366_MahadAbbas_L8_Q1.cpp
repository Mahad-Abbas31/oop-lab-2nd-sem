/*Q1. (Simple Inheritance) Write a C++ program to design a base class Person (name, address,
phone_no). Derive a class Employee (eno, ename) from Person. Derive a class Manager
(designation, department name, and basic-salary) from Employee. Write a menu driven
program to:
a. Accept all details of 'n' managers.
b. Display manager having highest salary.
*/
#include <iostream>
using namespace std;

// ____ Person Class
class Person {
  protected:
    string name;
    string address;
    long phone_no;

  public:
    void getPerson() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Address: ";
        cin >> address;
        cout << "Enter Phone No: ";
        cin >> phone_no;
    }
};

// ____ Employee Class from Person Class
class Employee : public Person {
  protected:
    int eno;
    string ename;

  public:
    void getEmployee() {
        cout << "Enter Employee No: ";
        cin >> eno;
        cout << "Enter Employee Name: ";
        cin >> ename;
    }
};

// ____ Manager Class from Employee Class
class Manager : public Employee {
    string designation;
    string dept;
    float salary;

  public:
    void getManager() {
        getPerson();
        getEmployee();

        cout << "Enter Designation: ";
        cin >> designation;
        cout << "Enter Department: ";
        cin >> dept;
        cout << "Enter Salary: ";
        cin >> salary;
    }

    float getSalary() {      return salary;      }

    void display() {
        cout << "\nName: " << name;
        cout << "\nEmployee No: " << eno;
        cout << "\nDepartment: " << dept;
        cout << "\nSalary: " << salary << endl;
    }
};

// ____ Main Function
int main() {
    int n;
    cout << "Enter number of managers: ";
    cin >> n;

    Manager m[n];

    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of Manager " << i + 1 << endl;
        m[i].getManager();
    }

    int maxIndex = 0;

    for (int i = 1; i < n; i++) {
        if (m[i].getSalary() > m[maxIndex].getSalary())
            maxIndex = i;
    }

    cout << "\nManager with Highest Salary:";
    m[maxIndex].display();

    return 0;
}