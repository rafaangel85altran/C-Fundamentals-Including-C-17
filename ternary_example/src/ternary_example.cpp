//============================================================================
// Name        : ternary_example.cpp
// Author      : jrangel
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


#define FMAX(a,b) ((a)>(b) ? (a) : (b))
#define FMIN(a,b) ((a)<(b) ? (a) : (b))


int main() {

	int test FMIN(5,10);
	cout << "Ternary example: " << test << endl; // prints Ternary example
	return 0;
}


