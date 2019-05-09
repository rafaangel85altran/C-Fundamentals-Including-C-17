/*
 * Person.cpp
 *
 *  Created on: 9 may. 2019
 *      Author: jrangel
 */

#include "Person.h"
#include <string>

Person::Person(std::string first, std::string last, int arbitrary)
:

firstname(first), lastname(last), arbitrarynumber(arbitrary)
{
}

Person::~Person() {
	// TODO Auto-generated destructor stub
}

string Person::getName() {

	return firstname + " " + lastname + " ";

}

int Person::getNumber() {
	return arbitrarynumber;
}

