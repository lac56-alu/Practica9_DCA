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
    int valido = 1;

	cout << "########################################################" << endl; 
	cout << "                      Practica 9 - DCA" << endl;
	cout << "########################################################" << endl;    

    cout << "Ingrese operacion: ";
    cin >> op;
    cout <<"Ingrese x: ";
    cin >> x;
    cout << "Ingrese y: ";
    cin >> y;

    switch (op) {
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
            valido = 0;
    }

    if (valido)
        cout << "El resultado es " << resultado << " resultado" << endl;
    else
        cout << "Operacion invalida" << endl;

    return 0;
}