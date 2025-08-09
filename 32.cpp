#include <iostream>
using namespace std;

int main() {
    int numeros[5];

    for (int i = 0; i < 5; i++) {
        cout << "Ingrese el numero " << i + 1 << ": ";
        cin >> numeros[i];
    }

    cout << "Numeros ingresados: ";
    for (int i = 0; i < 5; i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}

