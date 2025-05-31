#include <iostream>
using namespace std;
int main() {
    int conteo = 0, veces;
    string nombre;
    cout << "Escriba su nombre: ";
    cin >> nombre;
    cout << "Cuantas veces quiere repetir su nombre: ";
    cin >> veces;
    do {
        cout << conteo + 1 << " " << nombre << endl;
        conteo++;
    } while (conteo < veces);
    return 0;
}