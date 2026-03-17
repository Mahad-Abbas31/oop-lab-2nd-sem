#include <iostream>
using namespace std;
class decrement{
    int val;
    public:
    decrement(){
        val=5;
    }
    decrement operator--(int){
        decrement temp;
        val--;
        return temp;
    }
    void display(){
        cout<<"value is: "<<val<<endl;
    }
};
int main()
{
    decrement obj,result;
    result=obj--;
    result.display();
    obj.display();
    return 0;
}