/*
 * practica1-ejercicio7.cpp
 *
 *  Created on: 24/10/2012
 *      Author: Ramon Lopez Bautista
 */

#include <iostream>
using namespace std;

const double PI=3.1416;

int main()
{
	double longitud, area;
	int radio;
	cout << "Hola" << endl;
	cout << "Este programa calcula la longitud y el área de un círculo" << endl;

	cout << "Radio = ";
	cin >> radio;
	longitud = 2*PI*radio;
	area = PI*(radio*radio);
	cout << "area = "<< area << endl;
	cout << "long = "<< longitud << endl;
	return 0;   // Valor de retorno al S.O.

}


