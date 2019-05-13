//============================================================================
// Name        : enum.cpp
// Author      : jrangel
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

enum carTyre {normal,wet, snow, sports};		//enum permite definir nuestro propio tipo de variables y su scope

int main() {

	 carTyre Tipodecoche = snow;

	 cout << Tipodecoche;

	return 0;
}
