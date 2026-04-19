/*Q4. (Multi-level Inheritance) Write a C++ program to calculate the percentage of a student using
multi-level inheritance. Accept the marks of three subjects in base class. A class will be
derived from the above mentioned class which includes a function to find the total marks
obtained and another class derived from this class which calculates and displays the
percentage of the student.
*/
#include <iostream>
using namespace std;

// ____ Marks Class
class Marks {
  protected:
    int m1;
    int m2;
    int m3;

  public:
    void getMarks() {
        cout << "Enter marks of 3 subjects: ";
        cin >> m1 >> m2 >> m3;
    }
};

// ____ Total Class from Marks Class
class Total : public Marks {
  protected:
    int total;

  public:
    void calcTotal() {       total = m1 + m2 + m3;       }
};

// ____ Percentage Class from Total Class
class Percentage : public Total {
    float percent;

  public:
    void calcPercent() {      percent = total / 3.0;      }

    void display() {
        cout << "Total = " << total << endl;
        cout << "Percentage = " << percent << "%" << endl;
    }
};

// ____ Main Function
int main() {
    Percentage p;
    p.getMarks();
    p.calcTotal();
    p.calcPercent();
    p.display();

    return 0;
}