#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int numeros[10];

    srand(time(0));
    for (int i = 0; i < 10; i++) {
        numeros[i] = rand() % 100;
    }

    for (int i = 0; i < 10 - 1; i++) {
        for (int j = 0; j < 10 - i - 1; j++) {
            if (numeros[j] > numeros[j + 1]) {
                int temp = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temp;
            }
        }
    }

    cout << "Numeros ordenados: ";
    for (int i = 0; i < 10; i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}

