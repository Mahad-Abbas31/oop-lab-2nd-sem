/*Q3. Create 2 classes Employee (Name, Father Name, Contact, Email) and Job_Detail (Title,
Salay, Id, JobDescription). Each employee will have job detail. Link these 2 classes via
using Composition. Employee owns Job_Description and Job_Descriptioncannot exist
without Employee.
*/
#include <iostream>
using namespace std;

// ____ Job Detail class
class Job_Detail {
    string title, description;
    float salary;
    int id;

  public:
    Job_Detail(string t, float s, int i, string d) {
        title = t;
        salary = s;
        id = i;
        description = d;
    }

    void display() {
        cout << "\nTitle: " << title;
        cout << "\nSalary: " << salary;
        cout << "\nID: " << id;
        cout << "\nDescription: " << description << endl;
    }
};

// _____ Employee Class
class Employee {
    string name, fatherName, contact, email;
    Job_Detail job; // Composition

  public:
    Employee(string n, string f, string c, string e,
             string t, float s, int i, string d)
        : job(t, s, i, d) {

        name = n;
        fatherName = f;
        contact = c;
        email = e;
    }

    void display() {
        cout << "\nEmployee Name: " << name;
        cout << "\nFather Name: " << fatherName;
        cout << "\nContact: " << contact;
        cout << "\nEmail: " << email;
        job.display();
    }
};

// ____ Main Function
int main() {
    Employee e("Ali", "Khan", "12345", "ali@gmail.com",
               "Manager", 70000, 101, "Handles team");

    e.display();
}