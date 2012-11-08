/*
 * practica1-ejercicio6.cpp
 *
 *  Created on: 24/10/2012
 *      Author: Ramon Lopez Bautista
 */

#include <iostream>
using namespace std;

const int KB = 1024;
const int MB = 1024 * KB;

int main() {

	int bytes;
	float kb, mb, b;

	cout << "Introducir numero de bytes: ";
	cin >> bytes;
	mb = bytes / MB;
	kb = bytes % MB / KB;
	b  = bytes % KB;
	cout << bytes << " son " << mb << " MB, " << kb << " KB y " << b << " bytes.";
	return 0;
}
