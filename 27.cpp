#include <iostream>
using namespace std;

int main() {
    string contrasena = "1234";
    string ingreso;
    int intentos = 3;

    while (intentos > 0) {
        cout << "Ingrese la contrasena: ";
        cin >> ingreso;

        if (ingreso == contrasena) {
            cout << "Acceso concedido" << endl;
            return 0;
        } else {
            intentos--;
            cout << "Contrasena incorrecta. Intentos restantes: " << intentos << endl;
        }
    }

    cout << "Acceso bloqueado" << endl;
    return 0;
}

