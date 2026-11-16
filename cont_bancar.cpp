#include <iostream>
#include <string>
using namespace std;

class ContBancar {
private:
    string titular;
    double sold;

public:
    ContBancar(string t) {
        titular = t;
        sold = 0;
    }

    void depune(double suma) {
        if (suma > 0) {
            sold = sold + suma;
            cout << "Ai depus " << suma << " lei" << endl;
        } else {
            cout << "Suma invalida!" << endl;
        }
    }

    void retrage(double suma) {
        if (suma > sold) {
            cout << "Fonduri insuficiente!" << endl;
        } else {
            sold = sold - suma;
            cout << "Ai retras " << suma << " lei" << endl;
        }
    }

    void afisare() {
        cout << "Titular: " << titular << ", sold: " << sold << " lei" << endl;
    }
};

int main() {
    string nume;
    cout << "Numele titularului: ";
    cin >> nume;

    ContBancar cont(nume);
    int optiune;
    double suma;

    do {
        cout << endl << "1. Depunere" << endl;
        cout << "2. Retragere" << endl;
        cout << "3. Afisare sold" << endl;
        cout << "0. Iesire" << endl;
        cout << "Optiune: ";
        cin >> optiune;

        if (optiune == 1) {
            cout << "Suma: ";
            cin >> suma;
            cont.depune(suma);
        } else if (optiune == 2) {
            cout << "Suma: ";
            cin >> suma;
            cont.retrage(suma);
        } else if (optiune == 3) {
            cont.afisare();
        }
    } while (optiune != 0);

    return 0;
}
