#include <iostream>
using namespace std;
int main() {
    int age;
    cout << "Ingrese su edad: ";
    cin >> age;
    if (age >= 18) {
        cout << "Adulto";
    } else {
        if (age <= 12) {
            cout << "Ninio";
        } else {
            cout << "Adolecente";
        }
    }
    return 0;
}