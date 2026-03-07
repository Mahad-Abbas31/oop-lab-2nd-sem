/*You are developing a Smart Hotel Reservation System for a 5-star hotel.
The system must:
a. Store multiple guest reservations.
b. Use method chaining to set reservation details.
c. Maintain total reservations using a static variable.
d. Maintain room service tax rate (static for all guests).
e. Pass reservation array to a function to:
f. Calculate total revenue
g. Display VIP guests (bill > 100,000)
h. Find longest stay guest
i. Save all records into a file.
j. Load records from file when program starts.
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Reservation {
    string name;
    int days;
    double bill;

public:
    // ___ Static Members
    static int totalReservations;
    static double taxRate;

    // ___ Chaining Setters
    Reservation& setName(string name) {
        this->name = name;
        return *this;
    }

    Reservation& setDays(int days) {
        this->days = days;
        return *this;
    }

    Reservation& setBill(double bill) {
        this->bill = bill;
        totalReservations++;
        return *this;
    }

    // ___ Getters
    string getName() { return name; }
    int getDays() { return days; }
    double getBill() { return bill; }

    // ___ Display
    void display() {
        cout << "Guest: " << name
             << " | Days: " << days
             << " | Bill: " << bill << endl;
    }

    // ___ File Output
    void save(ofstream &fout) {
        fout << name << " " << days << " " << bill << endl;
    }

    // ___ File Input
    void load(ifstream &fin) {
        fin >> name >> days >> bill;
        totalReservations++;
    }
};

// ___ Static Member Initialized
int Reservation::totalReservations = 0;
double Reservation::taxRate = 0.12;


// Function Prototypes
int dataCounter(string filename);
void loadFromFile(Reservation *r, int size);
void saveToFile(Reservation *r, int size);
double totalRevenue(Reservation *r, int n);
void vipGuests(Reservation *r, int n);
void longestStay(Reservation *r, int n);


// MAIN
int main() {

    int size = dataCounter("reservations.txt");

    Reservation *r = new Reservation[size];

    loadFromFile(r, size);

    cout << "Records loaded: " << size << endl;

    int newGuests;
    cout << "\nEnter number of new reservations: ";
    cin >> newGuests;

    // REAL dynamic resizing
    Reservation *temp = new Reservation[size + newGuests];

    for(int i=0;i<size;i++)
        temp[i] = r[i];

    delete[] r;
    r = temp;

    for(int i=size; i<size+newGuests; i++) {

        string name;
        int days;
        double bill;

        cout << "\nEnter Guest Name: ";
        cin >> name;

        cout << "Enter Days Stayed: ";
        cin >> days;

        cout << "Enter Bill Amount: ";
        cin >> bill;

        r[i].setName(name).setDays(days).setBill(bill);
    }

    size += newGuests;

    cout << "\nAll Reservations\n";
    for(int i=0;i<size;i++)
        r[i].display();

    cout << "\nTotal Reservations: "
         << Reservation::totalReservations << endl;

    cout << "\nTotal Revenue (with tax): "
         << totalRevenue(r,size) << endl;

    vipGuests(r,size);
    longestStay(r,size);

    saveToFile(r,size);

    cout << "\nRecords saved to file.\n";

    delete[] r;

    return 0;
}


// ____FUNCTIONS____

int dataCounter(string filename) {

    ifstream fin(filename);
    int count = 0;
    string line;

    while(getline(fin,line))    count++;

    fin.close();
    return count;
}


void loadFromFile(Reservation *r, int size) {

    ifstream fin("reservations.txt");
    
    for(int i=0;i<size;i++)    r[i].load(fin);
    fin.close();
}


void saveToFile(Reservation *r, int size) {

    ofstream fout("reservations.txt");

    for(int i=0;i<size;i++)    r[i].save(fout);
    fout.close();
}


double totalRevenue(Reservation *r, int n) {

    double total = 0;
    for(int i=0;i<n;i++)    total += r[i].getBill();

    return total + (total * Reservation::taxRate);
}


void vipGuests(Reservation *r, int n) {

    cout << "\nVIP Guests (Bill > 100000)\n";

    for(int i=0;i<n;i++)
        if(r[i].getBill() > 100000)
            r[i].display();
}


void longestStay(Reservation *r, int n) {

    int maxIndex = 0;

    for(int i=1;i<n;i++)
        if(r[i].getDays() > r[maxIndex].getDays())
            maxIndex = i;

    cout << "\nLongest Stay Guest\n";
    r[maxIndex].display();
}