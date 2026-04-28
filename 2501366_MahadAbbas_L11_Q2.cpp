#include <iostream>
using namespace std;

// ____ Abstract Base Class
class Movie {
protected:
    string name, genre, director;
    int duration, shootingTime, postProductionTime;

public:
    Movie(string n, string g, string d, int dur, int st, int pt)
        : name(n), genre(g), director(d), duration(dur),
          shootingTime(st), postProductionTime(pt) {}

    virtual double EstimatedCost() = 0; // pure virtual

    virtual void printImportantInfo() {
        cout << "\n--- Important Information (General Movie) ---\n";
        cout << "Name: " << name << endl;
        cout << "Genre: " << genre << endl;
        cout << "Director: " << director << endl;
        cout << "Shooting Time: " << shootingTime << " hours\n";
    }
};

class AnimatedMovie : public Movie {
public:
    AnimatedMovie(string n, string g, string d, int dur, int st, int pt)
        : Movie(n, g, d, dur, st, pt) {}

    double EstimatedCost() override {
        return postProductionTime * 1000;
    }

    void printImportantInfo() override {
        cout << "\n--- Important Information (Animated Movie) ---\n";
        cout << "Name: " << name << endl;
        cout << "Director: " << director << endl;
        cout << "Post Production Time: " << postProductionTime << " hours\n";
        cout << "Estimated Cost: $" << EstimatedCost() << endl;
    }
};

class LiveActionMovie : public Movie {
public:
    LiveActionMovie(string n, string g, string d, int dur, int st, int pt)
        : Movie(n, g, d, dur, st, pt) {}

    double EstimatedCost() override {
        return shootingTime * 800;
    }

};

int main() {
    Movie* m1 = new AnimatedMovie("Frozen", "Animation", "Disney", 120, 50, 80);
    Movie* m2 = new LiveActionMovie("Avengers", "Action", "Marvel", 150, 100, 40);

    m1->printImportantInfo();
    m2->printImportantInfo();

    delete m1;
    delete m2;

    return 0;
}