#include <iostream>
using namespace std;

int main() {
    int temperatura;

    cout << "Unesi temperaturu: ";
    cin >> temperatura;

    if (temperatura < 0) {
        cout << "Smrzavanje." << endl;
    } else if (temperatura < 15) {
        cout << "Hladno." << endl;
    } else if (temperatura < 25) {
        cout << "Ugodno." << endl;
    } else {
        cout << "Vruće." << endl;
    }

    return 0;
}