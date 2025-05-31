#include <iostream>
using namespace std;
int main() {
    int i, veces;
    string nombre;
    cout << "Escribe tu nombre: ";
    cin >> nombre;
    cout << "Cuantas veces quieres imprimir tu nombre: ";
    cin >> veces;
    for (i = 0; i < veces; i++)
    {
        cout << i + 1 << " " << nombre << endl;
    }
    return 0;
}