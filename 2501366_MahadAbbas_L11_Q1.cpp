#include <iostream>
using namespace std;

class Movie{
protected:
    string name;
    string genre;
    string director;
    float duration;
    float shootingTime;
    float postProductionTime;

public:
    Movie(string n, string g, string d, float dur, float shoot, float post) : name(n), genre(g), director(d), duration(dur), shootingTime(shoot), postProductionTime(post){}

    virtual float EstimatedCost() = 0;

    virtual void printInfo(){
        cout << "\nMovie Name: " << name << endl;
        cout << "Genre: " << genre << endl;
        cout << "Director: " << director << endl;
        cout << "Duration: " << duration << " hrs" << endl;
        cout << "Shooting Time: " << shootingTime << " hrs" << endl;
        cout << "Post Production Time: " << postProductionTime << " hrs" << endl;
    }

    virtual void printImportantInfo(){
        cout << "\n*** Important Info ***\n";
        cout << "Name: " << name << ", Director: " << director << endl;
        cout << "Estimated Cost: $" << EstimatedCost() << endl;
    }

    virtual ~Movie() {}
};

class AnimatedMovie : public Movie{
public:
    AnimatedMovie(string n, string g, string d, float dur, float shoot, float post) : Movie(n, g, d, dur, shoot, post) {}

    float EstimatedCost() override {
        return postProductionTime * 1000;
    }
};

class LiveActionMovie : public Movie {
public:
    LiveActionMovie(string n, string g, string d, float dur, float shoot, float post) : Movie(n, g, d, dur, shoot, post) {}

    float EstimatedCost() override {
        return shootingTime * 800;
    }
};

int main() {
    Movie* m1 = new AnimatedMovie("Toy World", "Animation", "John Lasseter", 2.0, 50, 120);
    Movie* m2 = new LiveActionMovie("Fast Run", "Action", "Justin Lin", 2.5, 100, 40);

    m1->printInfo();
    m1->printImportantInfo();

    m2->printInfo();
    m2->printImportantInfo();

    delete m1;
    delete m2;

    return 0;
}