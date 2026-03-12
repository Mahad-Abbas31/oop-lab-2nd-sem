/*1. Create a Student class, where attributes associated with each student are name, registration
number, father name, degree and department. All attributes should not be accessed directly.
One can view the details of all students. Note student attributes can not be changed by any
means after initialization. (Hint use constant objects)
*/
#include <iostream>
#include <string>

using namespace std;

class Student{
private:
    string name;
    string regNo;
    string fatherName;
    string degree;
    string department;

public:
    // ___ Constructor
    Student(string name,string regNo,string fatherName,string degree,string department)
    {
        this->name=name;
        this->regNo=regNo;
        this->fatherName=fatherName;
        this->degree=degree;
        this->department=department;
    }

    // ___ Display Data
    void show() const
    {
        cout<<name<<endl;
        cout<<regNo<<endl;
        cout<<fatherName<<endl;
        cout<<degree<<endl;
        cout<<department<<endl;
    }

    // ___ Error 
    void setName(string name){    this->name=name;    }

};

int main(){

    const Student s1("Ali","01","Ahmed","BS","CS");
    const Student s2("Hamza","02","Khalid","BS","IT");

    // s1.setName("Zain");

    s1.show();
    s2.show();
}