#include <iostream>
using namespace std;

int main() {
    int segundos;
    cout << "Ingrese la cantidad de segundos: ";
    cin >> segundos;

    int horas = segundos / 3600;
    int minutos = (segundos % 3600) / 60;
    int segRestantes = segundos % 60;

    cout << horas << " horas, " << minutos << " minutos y " << segRestantes << " segundos." << endl;

    return 0;
}

