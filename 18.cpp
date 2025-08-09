#include <iostream>
using namespace std;

int main() {
    int nota;
    cout << "Ingrese su calificacion: ";
    cin >> nota;

    if (nota >= 6) {
        cout << "Aprobado" << endl;
    } else {
        cout << "Desaprobado" << endl;
    }

    return 0;
}

