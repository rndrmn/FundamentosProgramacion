/*
 * practica2-ejercicio7.cpp
 *
 *  Created on: 27/10/2012
 *      Author: Ramon Lopez Bautista
 */

#include <iostream>
using namespace std;

int main () {
	int mes;
	int dias;
	cout << "Introducir numero de mes: ";
	cin >> mes;
	if (mes < 1 || mes > 12) { //comprobamos mes correcto
		cout << "Numero de mes incorrecto";
		return -1;
	}
	else if (mes == 2) // caso febrero
		dias = 28;
	else if (mes < 8 && mes % 2 == 1) // de enero a julio los meses impares
		dias = 31;
	else if (mes < 8) // de enero a julio los meses pares
		dias = 30;
	else if (mes % 2 == 1) // despues de julio los meses impares
		dias = 30;
	else // despues de julio los meses pares
		dias = 31;

	cout << "El mes introducido tiene " << dias << " dias" << endl;

	return 0;
}




