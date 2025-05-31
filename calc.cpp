#include <iostream>
using namespace std;
int main() {
    int operandoUno, operandoDos, opcion, resultado;
    cout << "Ingrese primer valor: ";
    cin >> operandoUno;
    cout << "Ingrese segundo valor: ";
    cin >> operandoDos;
    cout << "1. Suma" << endl;
    cout << "2. Resta\n";
    cout << "3. Multiplicacion\n";
    cout << "4. Division\n";
    cout << "Elija su opcion: ";
    cin >> opcion;
    switch (opcion)
    {
    case 1:
        resultado = operandoUno + operandoDos;
        break;
    case 2:
        resultado = operandoUno - operandoDos;
        break;
    case 3:
        resultado = operandoUno * operandoDos;
        break;
        case 4:
        resultado = operandoUno / operandoDos;
        break;
    default:
        cout << "~_~ un cursito de comprension lectora no te caeria mal";
        break;
    }
    cout << "El resultado es: " << resultado << endl;
    return 0;
}