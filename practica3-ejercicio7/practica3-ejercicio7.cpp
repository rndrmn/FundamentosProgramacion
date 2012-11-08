/*
 * practica3-ejercicio6.cpp
 *
 *  Created on: 08/11/2012
 *      Author: Ramon Lopez Bautista
 */

#include <iostream>
using namespace std;

bool valido (char op);
int operar (char op, int op1, int op2);

int main () {
	int op1, op2;
	char op;

	cout << "Calculadora simple." << endl << "Usar solo numeros enteros, las operaciones validas son + - * /" << endl;

	do {
		try {
			cout << endl << "\tOperacion\t: ";
			cin >> op;
			if (valido(op)) {
				cout << "\tOperando 1\t: ";
				cin >> op1;
				cout << "\tOperando 2\t: ";
				cin >> op2;
				cout << "\tResultado\t: " << operar(op,op1,op2);
			}
			else if (op != '&')
				//cout << "\tERROR!!!!";
				throw -1;
		}
		catch (int e) {
			cout << "Operacion no existente";
		}
	} while (op != '&');
	cout << "FIN DEL PROGRAMA.";

	return 0;
}

bool valido (char op) {

	switch (op) {
		case '+': case '-': case '*': case '/':
			return true;
		default:
			return false;
	}
}

int operar (char op, int op1, int op2) {
	switch (op) {
	case '+': return op1 + op2; break;
	case '-': return op1 - op2; break;
	case '*': return op1 * op2; break;
	case '/': return op1 / op2; break;
	default: break;//
	}
	return 0;
}

