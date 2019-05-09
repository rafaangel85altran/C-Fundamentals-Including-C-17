/*
 * Person.cpp
 *
 *  Created on: 9 may. 2019
 *      Author: jrangel
 */

#include "Person.h"
#include <string>

Person::Person() {
	Person::arbitrarynumber = 0;
	Person::firstname = "None";
	Person::lastname = "None2";

}

Person::~Person() {
	// TODO Auto-generated destructor stub
}

string Person::getName() {

	return firstname + " " + lastname;
}

