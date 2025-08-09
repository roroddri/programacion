#include <iostream>
#include <string>
using namespace std;

struct Libro {
    string titulo;
    string autor;
    int anio;
};

int main() {
    Libro libros[3];

    for (int i = 0; i < 3; i++) {
        cout << "Ingrese el titulo del libro " << i + 1 << ": ";
        cin.ignore();
        getline(cin, libros[i].titulo);
        cout << "Ingrese el autor: ";
        getline(cin, libros[i].autor);
        cout << "Ingrese el anio de publicacion: ";
        cin >> libros[i].anio;
    }

    cout << "\nLista de libros:\n";
    for (int i = 0; i < 3; i++) {
        cout << libros[i].titulo << " - " << libros[i].autor
             << " (" << libros[i].anio << ")" << endl;
    }

    return 0;
}

