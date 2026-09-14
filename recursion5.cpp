#include <iostream>

using namespace std;

void binario(int n) {
    if (n == 0) {
        cout << 0;
        return;
    }

    if (n / 2 > 0) {
        binario(n / 2);
    }
    cout << n % 2;
}

int main() {
    int numero;
    cout << "digite el numero: ";
    cin >> numero;
    
    cout << "El numero " << numero << " en binario es: ";
    binario(numero); 
    cout << endl;

    return 0;
}
