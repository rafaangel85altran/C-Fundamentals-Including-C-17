//============================================================================
// Name        : 05.cpp
// Author      : jrangel
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Person.h"
using namespace std;

int main() {

	Person p1;

	std::string name = p1.getName();

	cout << name << endl;

	return 0;
}
