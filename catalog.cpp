#include <iostream>
#include <string>
using namespace std;
class Catalog {
private:
    string materie;
    int* note;
    int nrNote;
public:
    Catalog() { materie = "Necunoscuta"; nrNote = 0; note = nullptr; }
    Catalog(string m, int n) {
        materie = m;
        nrNote = n;
        note = new int[nrNote];
        for (int i = 0; i < nrNote; i++) note[i] = 0;
    }
    ~Catalog() { delete[] note; }
    void citire() {
        for (int i = 0; i < nrNote; i++) {
            cout << "Nota " << i + 1 << ": ";
            cin >> note[i];
        }
    }
    double medie() {
        if (nrNote == 0) return 0;
        int suma = 0;
        for (int i = 0; i < nrNote; i++) suma = suma + note[i];
        return (double)suma / nrNote;
    }
    void afisare() { cout << materie << " - media: " << medie() << endl; }
};
int main() {
    int n;
    cout << "Cate note? ";
    cin >> n;
    if (n < 0) return 0;
    Catalog c1("Matematica", n), c2;
    c1.citire();
    c1.afisare();
    c2.afisare();
    return 0;
}
