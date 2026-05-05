#include<iostream>
using namespace std;

template <class T>
T findMax(T a, T b){
    return (a > b) ? a : b;
}

template <class T1, class T2>
class LabRecord{
    T1 sampleID;
    T2 testResult;

public:
    // ___ Constructor
    LabRecord(T1 id, T2 result){
        sampleID = id;
        testResult = result;
    }

    // ___ Display Function
    void displayRecord(){
        cout << "Sample ID: " << sampleID
             << " | Test Result: " << testResult << endl;
    }
};

int main(){

    // ___ Task 1 Testing
    cout << "===== Function Template =====\n";

    int maxInt = findMax(50, 90);
    cout << "Max (int): " << maxInt << endl;

    double maxDouble = findMax(3.5, 7.2);
    cout << "Max (double): " << maxDouble << endl;


    // ___ Task 2 Testing
    cout << "\n===== Class Template =====\n";

    LabRecord<string, int> record1("Patient_A", 72);

    LabRecord<int, double> record2(101, 98.6);

    record1.displayRecord();
    record2.displayRecord();

    return 0;
}