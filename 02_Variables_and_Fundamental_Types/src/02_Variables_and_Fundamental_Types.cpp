//============================================================================
// Name        : 02_Variables_and_Fundamental_Types.cpp
// Author      : jrangel
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

int main() {

	float message = 1.59897456;

	int message_casted = static_cast<int>(message);			//Safe cast from float into a integer

	cout << message_casted << endl; // prints !!!Hello World!!!



	return 0;
}
