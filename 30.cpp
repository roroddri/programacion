#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int secreto = rand() % 50 + 1;
    int intento, intentos = 5;

    cout << "Adivine el numero secreto entre 1 y 50. Tiene 5 intentos." << endl;

    while (intentos > 0) {
        cout << "Ingrese un numero: ";
        cin >> intento;

        if (intento == secreto) {
            cout << "Correcto! El numero era " << secreto << endl;
            return 0;
        } else if (intento < secreto) {
            cout << "El numero secreto es mayor." << endl;
        } else {
            cout << "El numero secreto es menor." << endl;
        }
        intentos--;
    }

    cout << "Se acabaron los intentos. El numero era " << secreto << endl;
    return 0;
}

