#include <iostream>
#include <string>
using namespace std;

int main() {
    string ime = "Vito";
    int godine = 19;
    int broj_položenih_ispita = 5;
    int ukupan_broj_ispita = 8;

    double postotak = (double)broj_položenih_ispita / ukupan_broj_ispita * 100;

    cout << "Ime: " << ime << endl;
    cout << "Godine: " << godine << endl;
    cout << "Broj položenih ispita: " << broj_položenih_ispita << endl;
    cout << "Ukupan broj ispita: " << ukupan_broj_ispita << endl;
    cout << "Postotak: " << postotak << "%" << endl;

    return 0;
}