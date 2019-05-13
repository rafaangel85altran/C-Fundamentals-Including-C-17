//============================================================================
// Name        : Data_structures_example.cpp
// Author      : jrangel
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

struct movies_t {
	string title;		//string member of struct movies
	int year;			//int memeber of stuct movies
} mine, yours;			//objects related to the struct

void printmovie (movies_t movie);	//Declaration of function printmovie

int main() {

	string mystr;

	mine.title = "2001 A Space Odyssey";
	mine.year = 1968;
	cout << "Enter title";
	getline(cin,yours.title);				//Access to the struct member
	cout << "Enter year";
	getline(cin,mystr);
	stringstream(mystr) >> yours.year;

	cout << "My favorite movie is:" << endl;
	printmovie(mine);
	cout << "And yours is:" << endl;
	printmovie(yours);

	return 0;
}

void printmovie (movies_t movie)	//Definition of print movie
{
	cout << movie.title;
	cout << "(" << movie.year << ")\n";
}
