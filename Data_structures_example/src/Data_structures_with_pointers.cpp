/*
 * Data_structures_with_pointers.cpp
 *
 *  Created on: 13 may. 2019
 *      Author: jrangel
 */


#include <iostream>
#include <sstream>
#include <string>

using namespace std;

struct movies_t {
	string year;
	string title;
};

int main () {

	string mystr;

	movies_t amovie;		//object amovie with the struct movies_t
	movies_t * pmovie;		//declaration of pointer pmovie of the struct movies_t
	pmovie = &amovie;		//pointer is "pointing" to the address of amovie

	cout << "Enter title" << endl;
	getline(cin, pmovie->title);		//
	cout << "Enter year" << endl;
	getline(cin, mystr);
	(stringstream) mystr >> pmovie -> year;

	cout << "You have entered" << endl;
	//cout << pmovie -> title << endl;		//member title of object amovie pointing to pmovie. Equivalent (*a).b
	cout << (*pmovie).title << endl;
	cout << pmovie -> year << endl;

	return 0;
}

