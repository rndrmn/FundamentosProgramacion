/*
 * practica2-ejercicio6.cpp
 *
 *  Created on: 26/10/2012
 *      Author: Ramon Lopez Bautista
 */

#include <iostream>
using namespace std;

const int RANGO1 = 100; // KW pagados a PRECIO1
const int RANGO2 = 150; // KW pagados a PRECIO2
						// resto KW pagados a PRECIO3

const float PRECIO1 = .5; // €/KW
const float PRECIO2 = .35;
const float PRECIO3 = .25;

const float FIJO = 1; // gasto añadido fijo

int main () {
	int a, b; // contador antes y ahora (en kW)
	int consumo; // diferencia entre los contadores
	float importe; // gasto monetario

	cout << "Introduzcase el dato del contador anterior: ";
	cin >> a;
	cout << "Ahora el dato del contador actual: ";
	cin >> b;
	consumo = b - a;
	cout << endl << "Consumo generado: " << consumo << " KW"<< endl;
	importe = 1;
	if (consumo > 0 && consumo <= RANGO1)
		importe += PRECIO1 * consumo;
	else if (consumo > 0 && consumo <= RANGO1 + RANGO2) {
		importe += PRECIO1 * RANGO1;
		consumo -= RANGO1;
		importe += PRECIO2 * consumo;
	}
	else if (consumo > 0) {
		importe += PRECIO1 * RANGO1 + PRECIO2 * RANGO2;
		consumo -= RANGO1 - RANGO2;
		importe += PRECIO3 * consumo;
	}
	cout << "Importe total a pagar: " << importe << " euros";


	return 0;
}


