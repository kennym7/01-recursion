//Ejercicio 03
#include <iostream>

using namespace std;

bool busc(int arr[], int t, int x) {
    if (t == 0) {
        return false;
    }
    if (arr[t - 1] == x) {
        return true;
    }
    return busc(arr, t - 1, x);
}

int main() {
    int t, x;
    
    cout << "Ingrese la cantidad de elementos: ";
    cin >> t;
    
    int arr[t];
    cout << "Ingrese los elementos del arreglo:" << endl;
    for (int i = 0; i < t; i++) {
        cin >> arr[i];
    }
    cout << "Ingrese el valor a buscar: ";
    cin >> x;

    if (busc(arr, t, x) == true) {
        cout << "El valor fue encontrado." << endl;
    } else {
        cout << "El valor no fue encontrado." << endl;
    }

    return 0;
}
