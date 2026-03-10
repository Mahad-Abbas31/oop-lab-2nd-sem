// ___ 5 Minutes
#include<iostream>

using namespace std;

int x=10;

class Test{
private:
    int* x;

public:
    Test(){
        x=new int;
        *x=20;
    }

    Test(const Test &obj){
        x=new int;
        *x=*obj.x;
    }

    void setValue(int val){
        *x=val;
    }

    void show(){
        int x=30;
        cout<<"Local x: "<<x<<endl;
        cout<<"Class member x: "<<*this->x<<endl;
        cout<<"Global x: "<<::x<<endl;
        cout<<endl;
    }

    ~Test(){
        delete x;
    }
};

int main(){
    Test t1;
    Test t2=t1;
    t2.setValue(50);
    
    cout<<"Output for t1:"<<endl;
    t1.show();
    
    cout<<"Output for t2:"<<endl;
    t2.show();
    
    return 0;
}