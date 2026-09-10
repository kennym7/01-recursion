#include <iostream>
using namespace std;

int sumar(int n[], int m) {
    if (m == 0) {
        return 0;
    }
    return n[m - 1] + sumar(n, m - 1);
}

int main() {
    int n;
    cout << "Ingrese la cantidad de elementos del arreglo: ";
    cin >> n;

    int datos[n];
    for (int i = 0; i < n; i++) {
        cout << "Ingrese el elemento [" << i << "]: ";
        cin >> datos[i];
    }

    cout << "\nLA SUMA DE LOS ELEMENTOS DEL ARREGLO ES: " << sumar(datos, n) << endl;

    return 0;
}

