#include <iostream>
using namespace std;

int main() {
    float celsius;
    cout << "Ingrese la temperatura en Celsius: ";
    cin >> celsius;

    float fahrenheit = (celsius * 9/5) + 32;
    cout << "Temperatura en Fahrenheit: " << fahrenheit << endl;

    return 0;
}

