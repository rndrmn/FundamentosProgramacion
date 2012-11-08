/*
 * practica1-ejercicio10.cpp
 *
 *  Created on: 25/10/2012
 *      Author: Ramon Lopez Bautista
 */

#include <iostream>
using namespace std;

int main () {
	int n, // segundos dados y los restantes despues de cada operacion
		s, m, h, d, sem; // el tiempo correspondiente

	cout << "Introducir una cantidad de segundos: ";
	cin >> n;
	s = n % 60; n /= 60; // numero de segundos, n preparado para el siguiente calculo
	m = n % 60; n /= 60; // minutos
	h = n % 24;	n /= 24; // horas
	d = n % 7 ; 		 // dias
	sem = n / 7;		 // semanas

	cout 	<< "La cantidad introducida corresponde a " << sem << " semanas, "
			<<  d << " dias, " << h << " horas, " << m << " minutos, " << s << " segundos.";

	return 0;
}




