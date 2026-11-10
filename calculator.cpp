#include <iostream>
using namespace std;

class Calculator {
private:
    double a;
    double b;

public:
    Calculator() {
        a = 0;
        b = 0;
    }

    Calculator(double x, double y) {
        a = x;
        b = y;
    }

    void setNumbers(double x, double y) {
        a = x;
        b = y;
    }

    double getA() {
        return a;
    }

    double getB() {
        return b;
    }

    double aduna() {
        return a + b;
    }

    double scade() {
        return a - b;
    }

    double inmulteste() {
        return a * b;
    }

    double imparte() {
        if (b == 0) {
            cout << "Nu se poate imparti la 0!" << endl;
            return 0;
        }
        return a / b;
    }
};

int main() {
    Calculator calc;
    double x, y;
    char op;
    char continua = 'd';

    while (continua == 'd' || continua == 'D') {
        cout << "Introdu primul numar: ";
        cin >> x;
        cout << "Introdu operatia (+, -, *, /): ";
        cin >> op;
        cout << "Introdu al doilea numar: ";
        cin >> y;

        calc.setNumbers(x, y);

        switch (op) {
        case '+':
            cout << "Rezultat: " << calc.aduna() << endl;
            break;
        case '-':
            cout << "Rezultat: " << calc.scade() << endl;
            break;
        case '*':
            cout << "Rezultat: " << calc.inmulteste() << endl;
            break;
        case '/':
            if (calc.getB() != 0) {
                cout << "Rezultat: " << calc.imparte() << endl;
            } else {
                calc.imparte();
            }
            break;
        default:
            cout << "Operatie invalida!" << endl;
        }

        cout << "Vrei sa continui? (d/n): ";
        cin >> continua;
    }

    cout << "La revedere!" << endl;
    return 0;
}
