/*Q1. You are developing a Hospital Patient Management System for a private hospital.
The hospital wants to:
a. Store multiple patient records
b. Update details using method chaining
c. Pass records to a function using a pointer to array
d. Calculate average bill (bill)
e. Display critical patients (bill > 50000)
f. Find the oldest patient (age)
*/

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Patient {
private:
    string name;
    int age;
    float bill;

public:
    // ___ Default Constructor
    Patient(){
        name = "";
        age = 0;
        bill = 0.0;
    }
    
    // ___ Parameterized Constructor
    Patient(string name, int age, float bill){
        this->name = name;
        this->age = age;
        this->bill = bill;
    }

    // ___ Copy Constructor
    Patient(const Patient &obj){
        name = obj.name;
        this->age = obj.age;
        this->bill = obj.bill;
    }

    // ___ Setter Functions
    Patient& setName(string name){
        this->name = name;
        return *this;
    }

    Patient& setBill(float bill){
        this->bill = bill;
        return *this;
    }

    Patient& setAge(int age){
        this->age = age;
        return *this;
    }

    // ___ Getter Functions
    string getName(){    return name;    }
    int getAge(){    return age;    }
    float getBill(){    return bill;    }

    // ___ Critical Patient
    void criticalPatient(){
        if(bill>50000){
            cout << "Name: " << getName() << endl
                 << "Age: " << getAge() << endl
                 << "Bill: " << getBill() << endl << endl;
        }
    }

    // ___ Display Method
    void display(Patient* p, int size){
        cout << setw(4) << "NAMES" << setw(14) << "AGE" << setw(12) << "BILL" << setw(14) << "CRITICAL" << endl;
        
        for(int i=0; i<size; i++){
            cout <<  setw(4) << p[i].getName() << setw(10) << p[i].getAge() <<  setw(14) << p[i].getBill() << setw(14);

            if(p[i].bill>50000)    cout << "+" << endl;
            else                   cout << "-" << endl;
        }
    }

    // ___ Average Patients Bill
    float averageBill(Patient* p, int size){
        float sum=0;
        
        for(int i=0; i<size; i++)    sum = sum + p[i].bill;
        
        return sum/size;
    }

    // ___ Oldest Patient
    void oldestPatient(Patient* p, int size){
    int index = 0;

    for(int i=1;i<size;i++){
        if(p[i].age > p[index].age)
            index = i;
    }

    cout << "\n---Oldest Patient---\n";
    cout << "Name: " << p[index].name << endl;
    cout << "Age: " << p[index].age << endl;
    cout << "Bill: " << p[index].bill << endl;
}

};

int main(){
    
    int size;
    cout << "Enter the number of patients: ";
    cin >> size;

    // ___ Dynamic Memory for No. of Patients
    Patient* p = new Patient[size];

    int age;
    string name;
    float bill;

    // ___ Input by Chaining
    for(int i=0; i<size; i++){
        cout << "Enter the Name of Patient # " << i+1 << " : ";
        cin >> name;
        
        cout << "Enter the Age of Patient # " << i+1 << " : ";
        cin >> age;
        
        cout << "Enter the Bill of Patient # " << i+1 << " : ";
        cin >> bill;
        cout << endl;

        // ___ Chaining Here 
        p[i].setName(name).setAge(age).setBill(bill);
    }

    p->display(p, size);

    // ___ Critical Patients
    cout << "---Critical Patient!---" << endl;
    for(int i=0;i<size;i++){
        p[i].criticalPatient();
    }

    // ___ Average Bill
    cout << "\nAverage Bill: " << p->averageBill(p, size) << endl;
    
    // ___ Oldest Patient
    p->oldestPatient(p, size);

    // ___ Deallocate Memory
    delete[] p;

    return 0;
}
