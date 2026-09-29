#include <iostream>
using namespace std;

int main() {
    system("chcp 65001 > nul");

    int godine;

    cout <<"Koliko imaš godina? ";
    cin >> godine;

    cout << "Imaš " << godine << " godina." << endl;

    return 0;

}