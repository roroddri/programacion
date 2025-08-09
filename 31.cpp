#include <iostream>
#include <string>
#include <cctype>
#include <limits>
using namespace std;

int main() {
    string texto;
    int contador = 0;

    cout << "Ingrese una cadena de texto: ";
    getline(cin, texto);

    for (size_t i = 0; i < texto.size(); i++) {
        texto[i] = tolower(static_cast<unsigned char>(texto[i]));
    }

    for (size_t i = 0; i < texto.size(); i++) {
        if (texto[i] == 'a') {
            contador++;
        }
    }

    cout << "La letra 'a' aparece " << contador << " veces." << endl;
    return 0;
}


