/*
 * practica1-ejercicio11.cpp
 *
 *  Created on: 25/10/2012
 *      Author: Ramon Lopez Bautista
 */

#include <iostream>
using namespace std;

int main () {
	float teoria, problemas; // notas dadas
	float final; // nota resultante

	cout << "Introducir nota de teoria: ";
	cin >> teoria;
	cout << "Introducir nota de problemas: ";
	cin >> problemas;

	final = .7 * teoria + .3 * problemas;
	cout << endl << "La nota final es " << final << "." << endl;

	return 0;
}



