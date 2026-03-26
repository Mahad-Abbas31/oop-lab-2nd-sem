/* Q3: Create a Box class with:
• length
• width
• height
Overload the < operator to compare the volume of two boxes.
Overload the < operator to compare the volume of two boxes.
*/
#include<iostream>

using namespace std;

class Box{
    float height;
    float width;
    float length;

  public:

    // ____ Constructor
    Box(float width = 0, float length = 0, float height = 0){
        this->width = width;
        this->height = height;
        this->length = length;
    }

    // ____ Setters
    void setWidth(float width){      this->width = width;      }    
    void setHeight(float height){    this->height = height;    }    
    void setLength(float length){    this->length = length;    }

    // ____ Getters
    float getWidth(){     return width;     }
    float getHeight(){    return height;    }
    float getLength(){    return length;    }

    // ____ Display
    void display(){
        cout << "Height: " << height << endl
             << "Width: " << width << endl
             << "Length: " << length << endl;
    }

    // ____ Volume Function
    int volume() const {
        return width * height * length;
    }

    // ____ < Operator Overloading
    bool operator<(Box b){
        return this->volume() < b.volume();
    }
};

int main(){
    Box b1(2,3,4), b2(4,5,6);

    cout << "============\n"
         << "    Box 1   \n"
         << "============\n";
    b1.display();

    cout << "============\n"
         << "    Box 2   \n"
         << "============\n";
    b2.display();

    if(b1 < b2)
        cout << "\nBox 1 has smaller volume\n";
    else
        cout << "\nBox 2 has smaller volume\n";

    return 0;    
}