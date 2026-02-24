/* Create a class Employee with array of salaries for 12 months. Input and display salaries using array
of objects.
Use inline function to calculate the average salary of each employee.
Pass array of Employee objects to a function that calculates total annual salary.
Implement dynamic memory allocation for n employees, where n is input at runtime.
*/
#include <iostream>

using namespace std;

class Employee{
// ___ Private Members
    float salary[12];

// ___ Public Members
public:
    // ___ Default Constructor
    Employee(){
        for(int i=0; i<12; i++)
            salary[i] = 0;
    }

    // ___ Salary Input
    void inputSalary(){
        for(int i=0; i<12; i++){
            cout << "Enter Salary for Month " << i+1 << " : ";
            cin >> salary[i];
        }
    }

    // ___ Salary Display
    void displaySalary(){
        for(int i=0; i<12; i++)
            cout << "Month " << i+1 << " : " << salary[i] << endl;    
    }

    // ___ Salary Avg
    inline float avgSalary(){
        float sum = 0;
        
        for(int i=0; i<12; i++)
            sum = sum + salary[i];

        return sum/12 ;  
    }

    // ___ Annual Salary
    float annualSalary(){
        float sum = 0;

        for(int i=0; i<12; i++)
            sum = sum + salary[i];
        
        return sum;
    }

};

// ___ Function Prototype
float totalAnnualSalary(Employee *e, int size);

int main(){
    int employeeSize;

    cout << "Enter No. of Employees: ";
    cin >> employeeSize;

    Employee *e;

    e = new Employee[employeeSize];

    cout << "----Input Salary----\n";
    for(int i=0; i<employeeSize; i++){
        cout << "--> Employee " << i+1 << " : \n";
        e[i].inputSalary();
    }

    cout << "\n----Salary Break-down----\n";
    for(int i=0; i<employeeSize; i++){
        cout << "--> Employee " << i+1 << " : \n";
        e[i].displaySalary();
    }
    
    cout << "\n----Average Monthly Salaries----\n";
    for(int i=0; i<employeeSize; i++){
        cout << "--> Employee " << i+1 << " : " << e[i].avgSalary();
    }
    
    cout << "\nTotal Annual Salary of Employees: " << totalAnnualSalary(e, employeeSize);

    delete[] e;

    return 0;
}

// ___ Annual Salary Function
float totalAnnualSalary(Employee *e, int size){
    float sum = 0;
    for(int i=0; i<size; i++)
        sum = sum + e[i].annualSalary();

    return sum;
}