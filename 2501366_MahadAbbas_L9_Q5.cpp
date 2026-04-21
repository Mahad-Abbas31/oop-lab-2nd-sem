/*Q5. In a client class (Name, ClientId, Contact Address, Personal Email, Personal detail),
Personal Email and Personal detail are private variable and a private function that
prints the complete detail of the client.
*/
#include <iostream>
using namespace std;

// ____ Client Class
class Client {
    string name, address;
    int clientId;

    // Private data
    string personalEmail;
    string personalDetail;

    // Private function
    void displayPrivate() {
        cout << "\nPersonal Email: " << personalEmail;
        cout << "\nPersonal Detail: " << personalDetail;
    }

  public:
    void setData() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Client ID: ";
        cin >> clientId;
        cout << "Enter Address: ";
        cin >> address;
        cout << "Enter Personal Email: ";
        cin >> personalEmail;
        cout << "Enter Personal Detail: ";
        cin >> personalDetail;
    }

    void display() {
        cout << "\nName: " << name;
        cout << "\nClient ID: " << clientId;
        cout << "\nAddress: " << address;

        // Calling private function internally
        displayPrivate();
    }
};

// ____ Main Function
int main() {
    Client c;
    c.setData();
    c.display();

    return 0;
}