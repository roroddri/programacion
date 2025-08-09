#include <iostream>
using namespace std;

int main() {
    int opcion;
    float a, b;

    cout << "MENU:\n1. Sumar\n2. Restar\n3. Salir\n";
    cout << "Elija una opcion: ";
    cin >> opcion;

    switch (opcion) {
        case 1:
            cout << "Ingrese dos numeros: ";
            cin >> a >> b;
            cout << "Suma: " << a + b << endl;
            break;
        case 2:
            cout << "Ingrese dos numeros: ";
            cin >> a >> b;
            cout << "Resta: " << a - b << endl;
            break;
        case 3:
            cout << "Saliendo..." << endl;
            break;
        default:
            cout << "Opcion invalida" << endl;
    }

    return 0;
}

