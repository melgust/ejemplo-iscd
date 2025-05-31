#include <iostream>
using namespace std;
int main() {
    int cantidad, suma = 0;
    cout << "Cuantos numeros desea agregar: ";
    cin >> cantidad;
    int vector[cantidad];
    for (int i = 0; i < cantidad; i++)
    {
        cout << "Ingrese numero: ";
        cin >> vector[i];
    }
    cout << "Los numeros ingresados son: \n";
    for (int i = 0; i < cantidad; i++)
    {
        cout << vector[i] << " ";
        suma += vector[i];
    }
    cout << "\nLa suma es: " << suma << endl;
    return 0;
}