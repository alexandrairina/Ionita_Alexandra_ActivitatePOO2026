#include <iostream>
#include <string>
using namespace std;

class Animal {
protected:
    string nume;
    int varsta;

public:
    Animal(string n, int v) {
        nume = n;
        varsta = v;
    }

    void afisare() {
        cout << nume << " are " << varsta << " ani" << endl;
    }

    virtual void sunet() {
        cout << "..." << endl;
    }
};

class Caine : public Animal {
public:
    Caine(string n, int v) : Animal(n, v) {
    }

    void sunet() {
        cout << nume << " face Ham Ham!" << endl;
    }
};

class Pisica : public Animal {
public:
    Pisica(string n, int v) : Animal(n, v) {
    }

    void sunet() {
        cout << nume << " face Miau!" << endl;
    }
};

int main() {
    Caine c("Rex", 3);
    Pisica p("Tom", 2);

    c.afisare();
    c.sunet();

    p.afisare();
    p.sunet();

    return 0;
}
