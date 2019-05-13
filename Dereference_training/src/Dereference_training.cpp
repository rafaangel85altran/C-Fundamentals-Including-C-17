//============================================================================
// Name        : Dereference_training.cpp
// Author      : jrangel
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
 * Dereference operator (*)
A variable which stores the address of another variable is called a pointer.
Pointers are said to "point to" the variable whose address they store.

An interesting property of pointers is that they can be used to access the variable they point to directly.
This is done by preceding the pointer name with the dereference operator (*).
The operator itself can be read as "value pointed to by".
 * */

#include <iostream>
#include "Coche.h"
using namespace std;

int main() {


	/*
int myvar = 25;
auto foo = &myvar;		//"Address of" operator
cout << foo << endl;
auto baz = *foo;		//"derefernce operator"
cout << baz << endl;	//baz is equal to the value pointing to & myvar (baz = 25)
*/

	Coche* getModel();	//the value pointing the getModel() function

	return 0;
}
