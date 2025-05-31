#include <iostream>
using namespace std;
int main() {
    int filas, columnas, suma = 0;
    cout << "Cuantas filas desea agregar: ";
    cin >> filas;
    cout << "Cuantas columnas desea agregar: ";
    cin >> columnas;
    int matriz[filas][columnas];
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout << "Ingrese numero: ";
            cin >> matriz[i][j];
        }
    }
    cout << "Los numeros ingresados son: \n";
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout << matriz[i][j] << "\t";
            suma += matriz[i][j];
        }
        cout << endl;
    }
    cout << "\nLa suma es: " << suma << endl;
    return 0;
}