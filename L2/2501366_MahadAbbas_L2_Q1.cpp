/*Create a class Named Student which can save student information containing
Roll Number, First Name, Last Name, Student class, Marks (can be in points) and
grade. Set default values for class members in default constructor. Initialize class
and fill with user provided values. At last, pass this class instance to a function
named PrintData, which prints incoming information contained within student
instance. Student Information to Store: Roll Number, First Name, Last Name,
Student Class, Total Marks and Grade.*/

#include <iostream>
#include <string>

using namespace std;

class Student{
    int rollNo;
    string firstName;
    string lastName;
    int clas;
    float marks;
    char grade;

public:
    Student(){
        cout << "\nNon-Paremeterized Constructor.....\n";
        rollNo = 2501366;
        firstName = "Mahad";
        lastName = "Abbas";
        clas = 5;
        marks = 98.9;
        grade = 'A';
    }
    
    Student(int r, string f, string l, int c, float m, char g){
        rollNo = r;
        firstName = f;
        lastName = l;
        clas = c;
        marks = m;
        grade = g;
        
    }
    
    void display(){
        cout << rollNo << endl
             << firstName << endl
             << lastName << endl
             << clas << endl
             << marks << endl
             << grade << endl << endl;
    }
};

int main(){

    int roll, cls;
    float mark;
    string first, last;
    char grde;

        cout << "Roll No. : ";
        cin >> roll;
        cout << "First Name : ";
        cin >> first;
        cout << "Last Name : ";
        cin >> last;
        cout << "Class : ";
        cin >> cls;
        cout << "Marks : ";
        cin >> mark;
        cout << "Grade : ";
        cin >> grde;

    Student s1;
    s1.display();

    Student s2(roll, first, last, cls, mark, grde);
    s2.display();
}