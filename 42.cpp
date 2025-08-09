#include <iostream>
using namespace std;

struct Fecha {
    int dia;
    int mes;
    int anio;
};

int main() {
    Fecha fecha;

    cout << "Ingrese el dia: ";
    cin >> fecha.dia;
    cout << "Ingrese el mes: ";
    cin >> fecha.mes;
    cout << "Ingrese el anio: ";
    cin >> fecha.anio;

    cout << "Fecha ingresada: ";
    if (fecha.dia < 10) cout << "0";
    cout << fecha.dia << "/";
    if (fecha.mes < 10) cout << "0";
    cout << fecha.mes << "/" << fecha.anio << endl;

    return 0;
}

