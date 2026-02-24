/*
*/
#include <iostream>

using namespace std;

class Product {
private:
    int id;
    string name;
    double price;
    int quantity;

public:
    Product() {
        id = 0;
        name = "";
        price = 0.0;
        quantity = 0;
    }

    // ___ Getter Functions
    int getId() const { return id; }
    string getName() const { return name; }
    double getPrice() const { return price; }
    int getQuantity() const { return quantity; }

    // ___ Setter Functions
    void setId(int i) { id = i; }
    void setName(string n) { name = n; }
    void setPrice(double p) { price = p; }
    void setQuantity(int q) { quantity = q; }

    // ___ Display
    void displayDetails() const {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Price: " << price << endl;
        cout << "Quantity: " << quantity << endl;
    }

    // ___ Update Price
    void updatePrice(double newPrice) {
        price = newPrice;
    }

    // ___ Calculate Cost
    double calculateTotalCost() const {
        return price * quantity;
    }
    
    // ___ Discount Price
    void discountPrice(double discountPercentage) {
        price = price - (price * discountPercentage / 100);
    }
};

int main() {

    // ___ Products = 5
    Product products[5];

    // ___ Input Details
    cout << "---- Enter Product Details ----\n";
    for(int i = 0; i < 5; i++) {
        int id, quantity;
        string name;
        double price;

        cout << "\nProduct " << i+1 << endl;

        cout << "Enter ID: ";
        cin >> id;
        products[i].setId(id);

        cout << "Enter Name: ";
        cin >> name;
        products[i].setName(name);

        cout << "Enter Price: ";
        cin >> price;
        products[i].setPrice(price);

        cout << "Enter Quantity: ";
        cin >> quantity;
        products[i].setQuantity(quantity);
    }

    // ___ Display Details
    cout << "\n---- Product Details ----\n";
    for(int i = 0; i < 5; i++) {
        cout << "\nProduct " << i+1 << endl;
        products[i].displayDetails();
    }

    // ___ Update Price
    cout << "\n---- Update Prices ----\n";
    for(int i = 0; i < 5; i++) {
        double newPrice;
        cout << "Enter new price for Product " << i+1 << ": ";
        cin >> newPrice;
        products[i].updatePrice(newPrice);
    }

    // ___ Apply Discount
    cout << "\n---- Apply Discount ----\n";
    for(int i = 0; i < 5; i++) {
        double discount;
        cout << "Enter discount % for Product " << i+1 << ": ";
        cin >> discount;
        products[i].discountPrice(discount);
    }

    // ___ Display Total Costs
    cout << "\n---- Total Cost of Each Product ----\n";
    for(int i = 0; i < 5; i++) {
        cout << "Product " << i+1 
             << " Total Cost: " 
             << products[i].calculateTotalCost() 
             << endl;
    }

    return 0;
}