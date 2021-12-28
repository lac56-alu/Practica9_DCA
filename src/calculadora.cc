#include <stdlib.h>
#include <iostream>
using namespace std;
#include <stdio.h>

float potencia(float base, int exponente) {
    float resultado = 1;
    int i;
    for (i = 0; i < exponente; ++i) {
        resultado *= base;
    }
    return resultado;
}

int main() {
    float x, y, resultado;
    char op;
    bool valido = true;

	cout << "########################################################" << endl; 
	cout << "                      Practica 9" << endl;
	cout << "########################################################" << endl;    

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
        case '*':
        case 'x':
            resultado = x * y;
            break;
        case '/':
            resultado = x / y;
            break;
        case '^':
        	resultado = potencia(x, (int) y);
            break;
        default:
            valido = false;
    }

    if (valido)
        cout << "El resultado es " << resultado << " resultado" << endl;
    else
        cout << "Operacion invalida" << endl;

    return 0;
}