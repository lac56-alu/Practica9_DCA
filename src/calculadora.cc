#include <stdlib.h>
#include <iostream>
using namespace std;
#include <stdio.h>

int main() {
    float x, y, resultado;
    char op;
    int valido = 1;

    cout << "Ingrese operacion: ";
    cin >> op;
    cout <<"Ingrese x: ";
    cin >> x;
    cout << "Ingrese y: ";
    cin >> y;

    witch (op) {
        case '+':
            resultado = x + y;
            break;
        case '-':
            resultado = x - y;
            break;
        default:
            valido = 0;
    }

    if (valido)
        cout << "El resultado es " << resultado << " resultado" << endl;
    else
        cout << "Operacion invalida" << endl;

    return 0;
}