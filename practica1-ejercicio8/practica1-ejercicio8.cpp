/*
 * practica1-ejercicio8.cpp
 *
 *  Created on: 25/10/2012
 *      Author: Ramon Lopez Bautista
 */

#include <iostream>
using namespace std;
const char M = char ('A' - 'a'); //lo que hay que sumar a cada letra para hacerla mayusculas

int main (){

	char a, b, c, d; // cuatro letras para una palabra

	cout << "Introduzcase una palabra de cuatro letras minusculas: ";
	cin >> a >> b >> c >> d;
	if (a < 'a' || a > 'z'|| b < 'a' || b > 'z' || c < 'a' || c > 'z' || d < 'a' || d > 'z') {
		cout << "Error" << endl;
		return -1;
	}
	cout << char(a + M) << char(b + M) << char(c + M) << char (d + M);

	return 0;
}


