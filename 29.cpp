#include <iostream>
#include <string>
using namespace std;

int main() {
    string palabra;
    cout << "Ingrese una palabra: ";
    cin >> palabra;

    cout << "Palabra en reversa: ";
    for (int i = palabra.size() - 1; i >= 0; i--) {
        cout << palabra[i];
    }
    cout << endl;

    return 0;
}

