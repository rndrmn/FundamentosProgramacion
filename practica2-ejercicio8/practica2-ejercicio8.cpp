/*
 * practica2-ejercicio8.cpp
 *
 *  Created on: 30/10/2012
 *      Author: Ramon Lopez Bautista
 */

#include <iostream>
using namespace std;

int main () {
	unsigned int codigo,
		provincia, op, control;
	cout << "Introducir el codigo de operacion: ";
	cin >> codigo;
	provincia = codigo / 1000; // el primer digito
	op = ((codigo % 1000) / 100) * 10 + (codigo % 100) / 10; // el segundo y tercer digito
	control = codigo % 10; // el cuarto digito

	cout << endl;
	if (provincia != 0 && control == op % provincia ) { // la provincia y el codigo de control son validos
		cout << "PROVINCIA\t\t" << provincia << endl;
		cout << "NUMERO DE OPERACION\t" << op << endl;
		cout << "DIGITO DE CONTROL\t" << control << endl;
	}

	else
		cout << "ERROR: CODIGO INVALIDO.";

	return 0;
}




