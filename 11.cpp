#include <iostream>
using namespace std;

int main() {
    float precio;
    cout << "Ingrese el precio del producto: ";
    cin >> precio;

    float descuento = precio * 0.10;
    float precioFinal = precio - descuento;

    cout << "Precio final con 10% de descuento: " << precioFinal << endl;

    return 0;
}

