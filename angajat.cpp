#include <iostream>
#include <string>
using namespace std;
class Angajat {
private:
    string nume;
    double salariu;
    int vechime;
public:
    Angajat() { nume = "Necunoscut"; salariu = 0; vechime = 0; }
    Angajat(string n, double s, int v) { nume = n; salariu = s; vechime = v; }
    void marire(double suma) { if (suma > 0) salariu = salariu + suma; }
    bool areBonus() { return vechime >= 5; }
    void afisare() { cout << nume << ", salariu " << salariu << ", vechime " << vechime << endl; }
};
int main() {
    Angajat a1("Maria", 4000, 6), a2("Ion", 3500, 2), a3;
    a1.marire(300);
    a1.afisare();
    a2.afisare();
    a3.afisare();
    if (a1.areBonus()) cout << "Maria primeste bonus" << endl;
    return 0;
}
