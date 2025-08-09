#include <iostream>
using namespace std;

int main() {
    int numero, suma = 0;

    do {
        cout << "Ingrese un numero positivo (negativo para salir): ";
        cin >> numero;
        if (numero >= 0) {
            suma += numero;
        }
    } while (numero >= 0);

    cout << "Suma total: " << suma << endl;
    return 0;
}

