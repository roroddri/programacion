#include <iostream>
using namespace std;

int main() {
    int edad;
    cout << "Ingrese su edad en anios: ";
    cin >> edad;

    int dias = edad * 365;
    cout << "Viviste aproximadamente " << dias << " dias." << endl;

    return 0;
}

