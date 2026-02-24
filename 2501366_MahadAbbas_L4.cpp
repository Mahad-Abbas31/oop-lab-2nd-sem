#include<iostream>

using namespace std;

class Student{
    int id;
    int marks;
public:
    void setData(){
        cout << "Enter ID and Marks\n";
        cin >> id >> marks;
    }

    int getId(){
        return id;
    }

    int getMarks(){
        return marks;
    }      

    int maxMarks(Student obj[], int Size){
        int max = 0;
    
        for(int i=0; i<Size; i++){
            if(obj[i].marks > max){
                max = obj[i].marks;
            }
        }
    
        for(int i=0; i<Size; i++){
            if(obj[i].marks == max){
                return i;
            }
        }
    }
    
};

int main(){
    cout << "Enter No. of Students\n";
    int n;
    cin >> n;

    Student *s1 = new Student[n];

    for(int i=0; i<n; i++){
        cout << "Student " << i+1 << endl;
        s1[i].setData();
    }

    for(int i=0; i<n; i++){
        cout << "Student " << i+1 << endl;
        cout << "ID " << s1[i].getId() << endl;
        cout << "Marks " << s1[i].getMarks() << endl;
    }

    cout << "Max Marks: " << s1->maxMarks(s1, n) << endl;

    return 0;
}
