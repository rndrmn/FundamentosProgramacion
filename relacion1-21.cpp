/*
 * relacion1-21.cpp
 *
 *  Created on: 30/10/2012
 *      Author: Ramon Lopez Bautista
 */

#include <iostream>
using namespace std;

int main () {
	char car;
	bool a = false, b = false, c = false;
	cout << "Introduzca caracteres, termine con un punto." << endl;
	do {
		cin.get(car);
		if (car != '.') {
			if (a && b && c)
				a = b = c = false;
			if (!a && car == 'a')
				a = true;
			else if (a && !b && car != 'b')
				a = false;
			if (a && !b && car == 'b')
				b = true;
			else if (a && b && car != 'c')
				a = b = false;
			if (a && b && !c && car == 'c')
				c = true;
		}
	} while (car != '.');

	if (c)
		cout << "Encontrado.";
	else
		cout << "No encontrado.";

	return 0;
}




