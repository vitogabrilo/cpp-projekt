#include <iostream>
using namespace std;

int main() {
    int broj;

    cout << "Unesi broj: ";
    cin >> broj;

    if (broj < 0) {
        cout << "Broj je negativan." << endl;
    } else if (broj == 0) {
        cout << "Broj je nula." << endl;
    } else {
        cout << "Broj je pozitivan." << endl;
    }

    return 0;
}