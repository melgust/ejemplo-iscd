#include <iostream>
using namespace std;
int main() {
    int numero, residuo;
    cout << "Ingrese el numero entero: ";
    cin >> numero;
    residuo = numero % 7;
    if (residuo == 0) {
        cout << "El numero es divisible por 7";
    } else {
        cout << "El numero no es divisible por 7";
    }
    return 0;
}