#include <iostream>
using namespace std;

int main() {
    int nota;
    cout << "Ingrese su nota: ";
    cin >> nota;

    if (nota >= 9) {
        cout << "Excelente" << endl;
    } else if (nota >= 7) {
        cout << "Buena" << endl;
    } else if (nota >= 5) {
        cout << "Regular" << endl;
    } else {
        cout << "Mala" << endl;
    }

    return 0;
}

