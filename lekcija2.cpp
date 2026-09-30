#include <iostream>
using namespace std;

int main() {
    system("chcp 65001 > nul");

    int godine;
    string ime;

    cout << "Kako se zoveš? ";
    cin >> ime;
    cout <<"Koliko imaš godina? ";
    cin >> godine;

    cout << "Imaš " << godine << " godina." << endl;
    cout << "Kako se zoveš? " << ime << endl;

    return 0;

}