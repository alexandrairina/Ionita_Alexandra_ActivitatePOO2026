#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string nume;
    int varsta;
    double medie;

public:
    Student() {
        nume = "";
        varsta = 0;
        medie = 0;
    }

    Student(string n, int v, double m) {
        nume = n;
        varsta = v;
        medie = m;
    }

    void citire() {
        cout << "Nume: ";
        cin >> nume;
        cout << "Varsta: ";
        cin >> varsta;
        cout << "Medie: ";
        cin >> medie;
    }

    void afisare() {
        cout << nume << ", " << varsta << " ani, media " << medie << endl;
    }

    bool areBursa() {
        return medie >= 9;
    }
};

int main() {
    int n;
    cout << "Cati studenti? ";
    cin >> n;

    Student s[50];
    for (int i = 0; i < n; i++) {
        cout << "Studentul " << i + 1 << endl;
        s[i].citire();
    }

    cout << endl << "Studenti cu bursa:" << endl;
    for (int i = 0; i < n; i++) {
        if (s[i].areBursa()) {
            s[i].afisare();
        }
    }

    return 0;
}
