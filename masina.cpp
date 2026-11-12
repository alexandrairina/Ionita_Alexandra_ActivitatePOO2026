#include <iostream>
#include <string>
using namespace std;

class Masina {
private:
    string marca;
    int an;
    int km;

public:
    Masina() {
        marca = "Necunoscuta";
        an = 2000;
        km = 0;
    }

    Masina(string m, int a, int k) {
        marca = m;
        an = a;
        km = k;
    }

    string getMarca() {
        return marca;
    }

    int getKm() {
        return km;
    }

    void calatoreste(int distanta) {
        km = km + distanta;
    }

    void afisare() {
        cout << marca << " din " << an << ", " << km << " km" << endl;
    }
};

int main() {
    Masina m1("Dacia", 2015, 120000);
    Masina m2("Ford", 2019, 60000);
    Masina m3;

    m1.afisare();
    m2.afisare();
    m3.afisare();

    m2.calatoreste(500);
    cout << "Dupa calatorie:" << endl;
    m2.afisare();

    if (m1.getKm() > m2.getKm()) {
        cout << m1.getMarca() << " are mai multi km" << endl;
    } else {
        cout << m2.getMarca() << " are mai multi km" << endl;
    }

    return 0;
}
