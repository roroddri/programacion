#include <iostream>
#include <string>
using namespace std;

int main() {
    string nombres[5];

    for (int i = 0; i < 5; i++) {
        cout << "Ingrese el nombre " << i + 1 << ": ";
        cin >> nombres[i];
    }

    cout << "Nombres en orden inverso:" << endl;
    for (int i = 4; i >= 0; i--) {
        cout << nombres[i] << endl;
    }

    return 0;
}

