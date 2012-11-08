/*
 * practica1-ejercicio12.cpp
 *
 *  Created on: 25/10/2012
 *      Author: Ramon Lopez Bautista
 */

#include <iostream>
using namespace std;

int main () {
	int a=6, b=14;
	int auxiliar;
	cout << "a vale " << a << " y b vale " << b << endl;
	// ¿Qué hacen estas tres sentencias?
	auxiliar = a; // a se guarda en otra variable
	a = b;		  // b se pasa a a
	b = auxiliar; // lo que se guardo en la otra variable (a) se pasa a b
				  // se han intercambiado los valores de a y b
	cout << "a vale " << a << " y b vale " << b << endl;
	a = a + b; // a contiene el valor de a + b
	b = a - b; // b contiene el valor de a - b = (a + b) - b = a
	a = a - b; // a contiene el valor de a - b = (a + b) - a = b
			   // se han intercambiado los valores de a y b
			   // sin necesidad de una variable externa, haciendo uso de propiedades algebraicas
			   // y las caracteristicas de las variables
	cout << "a vale " << a << " y b vale " << b << endl;
	return 0;
}


