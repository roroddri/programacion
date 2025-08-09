#include <iostream>
#include <string>
using namespace std;

struct Empleado {
    string nombre;
    int edad;
    float salario;
};

int main() {
    Empleado emp;

    cout << "Ingrese el nombre: ";
    cin >> emp.nombre;
    cout << "Ingrese la edad: ";
    cin >> emp.edad;
    cout << "Ingrese el salario: ";
    cin >> emp.salario;

    cout << "\nDatos del empleado:\n";
    cout << "Nombre: " << emp.nombre << endl;
    cout << "Edad: " << emp.edad << endl;
    cout << "Salario: $" << emp.salario << endl;

    return 0;
}

