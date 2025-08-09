#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string palabra;
    int contador = 0;

    cout << "Ingrese una palabra: ";
    cin >> palabra;

    for (int i = 0; i < palabra.size(); i++) {
        char c = tolower(static_cast<unsigned char>(palabra[i]));
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            contador++;
        }
    }

    cout << "Cantidad de vocales: " << contador << endl;
    return 0;
}

