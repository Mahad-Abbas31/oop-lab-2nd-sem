/*Overload default constructor for the class created in exercise 1.

• Overload constructor with one integer argument which sets roll number
value.
• Overload constructor with three arguments for roll number first and last
name.
• Initialize student instance with default constructor, and print values
on screen using PrintData function. (Created in exercise 1)
• Initialize student instance with overloaded constructor, and print
values on screen using PrintData function. (Created in exercise 1)*/

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

    Student(int r){
        rollNo = r;
    };

    Student(int r, string f, string l){
        rollNo = r;
        firstName = f;
        lastName = l;
    }
    
    void PrintData(){
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
    s1.PrintData();

    Student s2(roll, first, last, cls, mark, grde);
    s2.PrintData();

    Student s3(241023, "Zaryab", "Khan");
    s3.PrintData();

    Student s4(124123);
    s4.PrintData();
    
}