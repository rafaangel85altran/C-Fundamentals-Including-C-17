/*
 * Data_structure_with_array.cpp
 *
 *  Created on: 13 may. 2019
 *      Author: jrangel
 */

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

struct movies_t {
	string title;
	int year;
} films[3];				//Same example as before but with an array of objects

void printmovie (movies_t movie);

int main () {

	string mystr;
	int n;

	for (n = 0 ; n < 3 ; n ++)
	{
		cout << "Enter title" << endl;
		getline(cin,films[n].title);
		cout << "Enter year" << endl;
		getline(cin,mystr);
		stringstream(mystr) >> films[n].year;
	}

	cout << "You have entered the folowing movies" << endl;
	for (n = 0; n < 3 ; n ++)
		printmovie(films[n]);
	return 0;
}

void printmovie (movies_t movie) {
	cout << movie.title;
	cout << "(" << movie.year << ")" << endl;
}



