#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float radio;
    cout << "Ingrese el radio del circulo: ";
    cin >> radio;

    float area = 3.14 * radio * radio;
    cout << "El area del circulo es: " << area << endl;

    return 0;
}

