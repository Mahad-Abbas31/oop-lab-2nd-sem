/*In student class (Question 1) maintaining student count means your program could be able
to tell the count of student objects created. (User static counter variable)
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

    // ___ Static Counter
    static int count;

public:
    // ___ Constructor
    Student(string name,string regNo,string fatherName,string degree,string department)
    {
        this->name=name;
        this->regNo=regNo;
        this->fatherName=fatherName;
        this->degree=degree;
        this->department=department;
        count++;
    }

    // ___ Display Data
    void show() const
    {
        cout<<name<< ", ";
        cout<<regNo<< ", ";
        cout<<fatherName<< ", ";
        cout<<degree<< ", ";
        cout<<department<<endl;
    }

    // ___ Error 
    void setName(string name){    this->name=name;    }

    // ___ get count
    static int getCount(){    return count;    }

};

int Student::count = 0;

int main(){

    const Student s1("Ali","01","Ahmed","BS","CS");
    const Student s2("Hamza","02","Khalid","BS","IT");

    // s1.setName("Zain");

    s1.show();
    s2.show();

    cout<< "\nTotal Students: "<< Student::getCount() <<endl;
}