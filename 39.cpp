#include <iostream>
#include <string>
using namespace std;

struct Estudiante {
    string nombre;
    int edad;
    float promedio;
};

int main() {
    Estudiante estudiantes[3];

    for (int i = 0; i < 3; i++) {
        cout << "Ingrese el nombre del estudiante " << i + 1 << ": ";
        cin >> estudiantes[i].nombre;
        cout << "Ingrese la edad: ";
        cin >> estudiantes[i].edad;
        cout << "Ingrese el promedio: ";
        cin >> estudiantes[i].promedio;
    }

    cout << "\nLista de estudiantes:\n";
    for (int i = 0; i < 3; i++) {
        cout << estudiantes[i].nombre << " - " << estudiantes[i].edad
             << " anios - Promedio: " << estudiantes[i].promedio << endl;
    }

    return 0;
}

