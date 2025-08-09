#include <iostream>
#include <string>
using namespace std;

struct Producto {
    string nombre;
    float precio;
    int stock;
};

int main() {
    Producto productos[3];

    for (int i = 0; i < 3; i++) {
        cout << "Ingrese el nombre del producto " << i + 1 << ": ";
        cin >> productos[i].nombre;
        cout << "Ingrese el precio: ";
        cin >> productos[i].precio;
        cout << "Ingrese el stock: ";
        cin >> productos[i].stock;
    }

    cout << "\nLista de productos:\n";
    for (int i = 0; i < 3; i++) {
        cout << productos[i].nombre << " - $" << productos[i].precio
             << " - Stock: " << productos[i].stock << endl;
    }

    return 0;
}

