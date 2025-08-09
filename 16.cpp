#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float radio, altura;
    cout << "Ingrese el radio del cilindro: ";
    cin >> radio;
    cout << "Ingrese la altura del cilindro: ";
    cin >> altura;

    float volumen = 3.14 * radio * radio * altura;
    cout << "El volumen del cilindro es: " << volumen << endl;

    return 0;
}

