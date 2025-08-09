#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Ingrese un numero entero: ";
    cin >> num1;
    cout << "Ingrese otro numero entero: ";
    cin >> num2;

    cout << "Division entera: " << num1 / num2 << endl;
    cout << "Division flotante: " << float(num1) / num2 << endl;

    return 0;
}

