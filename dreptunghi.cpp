#include <iostream>
using namespace std;

class Dreptunghi {
private:
    double lungime;
    double latime;

public:
    Dreptunghi() {
        lungime = 0;
        latime = 0;
    }

    Dreptunghi(double l, double L) {
        lungime = l;
        latime = L;
    }

    double arie() {
        return lungime * latime;
    }

    double perimetru() {
        return 2 * (lungime + latime);
    }

    bool estePatrat() {
        return lungime == latime;
    }
};

int main() {
    double a, b;
    cout << "Lungime: ";
    cin >> a;
    cout << "Latime: ";
    cin >> b;

    Dreptunghi d(a, b);

    cout << "Aria: " << d.arie() << endl;
    cout << "Perimetrul: " << d.perimetru() << endl;

    if (d.estePatrat()) {
        cout << "Este patrat" << endl;
    } else {
        cout << "Nu este patrat" << endl;
    }

    return 0;
}
