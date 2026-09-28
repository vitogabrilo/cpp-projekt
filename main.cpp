#include <iostream>
using namespace std;
int main() {
    system("chcp 65001 > nul");
    int a = 10;
    int b = 5;
    cout << "Zbroj: " << a + b << endl;
    cout << "Razlika: " << a - b << endl;
    cout << "Umnožak: " << a * b << endl;

    return 0;
}