#include <iostream>
#include <string>
using namespace std;
class Carte {
private:
    string titlu;
    int pagini;
    int citite;
public:
    Carte() { titlu = "Necunoscuta"; pagini = 0; citite = 0; }
    Carte(string t, int p) { titlu = t; pagini = p; citite = 0; }
    void citeste(int n) { citite = citite + n; if (citite > pagini) citite = pagini; }
    void afisare() { cout << titlu << ": " << citite << "/" << pagini << " pagini" << endl; }
    bool terminata() { return citite == pagini && pagini > 0; }
};
int main() {
    Carte c1("Amintiri", 150), c2;
    c1.citeste(70);
    c1.afisare();
    c2.afisare();
    c1.citeste(80);
    if (c1.terminata()) cout << "Cartea a fost terminata" << endl;
    return 0;
}
