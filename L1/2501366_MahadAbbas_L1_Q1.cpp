#include <iostream>
#include <string>

using namespace std;

//____ Class ____
class Date {
private:
    int day;
    int month;
    int year;

    //____ Month Converting Function ____
    string getMonthName(int m) {
        string months[12] = {"January", "February", "March", "April", "May", "June",
                             "July", "August", "September", "October", "November", "December"};
        return months[m - 1];
    }

public:
    void inputData() {
        
        //____ Day wiht Validation____
        cout << "Enter Day (1-31): ";
        do{
            cin >> day;
            if (day < 1 || day > 31)    cout << "Invalid! Enter day between 1 and 31: ";
        } while (day < 1 || day > 31);

        //____ Month wirh Validation ____
        cout << "Enter Month (1-12): ";
        do {
            cin >> month;
            if (month < 1 || month > 12)    cout << "Invalid! Enter month between 1 and 12: ";
        } while (month < 1 || month > 12);

        //____ Year ____
        cout << "Enter Year: ";
        cin >> year;
    }

    //____ Methods/Functions ____
    void display1(){
        cout << month << "/" << day << "/" << year << endl;
    }

    void display2(){
        cout << getMonthName(month) << " " << day << ", " << year << endl;
    }

    void display3(){
        cout << day << " " << getMonthName(month) << " " << year << endl << endl;
    }
};

int main() {
    Date d;
    d.inputData();

    cout << "===================== \n";
    cout << "   Formatted Dates \n";
    cout << "===================== \n";
    d.display1();
    d.display2();
    d.display3();

    return 0;
}
