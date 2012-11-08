/*
 * practica1-ejercicio9.cpp
 *
 *  Created on: 25/10/2012
 *      Author: Ramon Lopez Bautista
 */

#include <iostream>
using namespace std;

int main () {
	int a, b, s; // dos numeros y su suma

	cout << "Introduzca un numero entero: ";
	cin >> a;
	cout << "Introduzca otro numero entero: ";
	cin >> b;

	s = a + b;

	cout << "Su suma es " << s << endl;
	/*
	 * La suma no da un resultado correcto cuando los numeros o su suma rebasan el maximo
	 * de la capacidad del tipo int
	 */

	return 0;
}


