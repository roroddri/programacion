#include <iostream>
using namespace std;

int main() {
    float numeros[10], suma = 0;

    for (int i = 0; i < 10; i++) {
        cout << "Ingrese el numero " << i + 1 << ": ";
        cin >> numeros[i];
        suma += numeros[i];
    }

    float promedio = suma / 10;
    cout << "El promedio es: " << promedio << endl;

    return 0;
}

