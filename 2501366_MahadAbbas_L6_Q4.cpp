/*4. You are creating an Employee Record App. Following information is required to store.
- name. A string that holds the employee’s name.
- idNumber. An int variable that holds the employee’s ID number.
- department. A string that holds the name of the department where the
employee works.
- position. A string that holds the employee’s job title.
- CovidStatus: Either the employee has been covid Positive or not.
Applications should have the following features.
- Any kind of getter function or output function should not allow any kind of
information or data change
- Create a function that reports the total employee stored so far.
- Add 2 employees' data with the surety that their data could never be changed
or updated.
- Employee ID number should be constant; it is not going to change ever.
*/

#include<iostream>

using namespace std;

class EmployeeRec{
private:
    const int idNum;
    string name;
    string department;
    string position;
    bool covidStatus;

    static int totalEmployees;
public:
    // ___ Constructor
    EmployeeRec(int id, string name, string department, string position, bool covidStatus) : idNum(id){
        this->name = name;
        this->department = department;
        this->position = position;
        this->covidStatus = covidStatus;

        totalEmployees++;
    }

    void show() const
    {
        cout << "Name: " << name << endl
             << "ID: " << idNum << endl
             << "Department: " << department << endl
             << "Position: " << position << endl
             << "Covid Status: " << covidStatus << endl
             << "---------------------------\n";
    }

    static int getTotalEmployee(){    return totalEmployees;    }
};

int EmployeeRec::totalEmployees=0;

int main(){

    const EmployeeRec e1(120, "Hammad", "IT", "Manager", false);
    const EmployeeRec e2(102 , "Hamza", "HR", "Officer", true);

    e1.show();
    e2.show();

    cout << "Total Employees: "
         << EmployeeRec::getTotalEmployee() << endl;
}
