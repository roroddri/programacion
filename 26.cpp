#include <iostream>
using namespace std;

int main() {
    int a = 0, b = 1, c;

    cout << "Serie de Fibonacci: ";
    for (int i = 1; i <= 20; i++) {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }
    cout << endl;

    return 0;
}

