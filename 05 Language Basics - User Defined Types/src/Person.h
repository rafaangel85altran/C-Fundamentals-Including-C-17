/*
 * Person.h
 *
 *  Created on: 9 may. 2019
 *      Author: jrangel
 */

#ifndef PERSON_H_
#define PERSON_H_

#include <string>
using namespace std;

class Person {
private:
	string firstname;		//private members of the class, they are not suposse to be accessed from outside
	string lastname;
	int arbitrarynumber;

public:
	Person(std::string first, std::string last, int arbitrary);
	virtual ~Person();
	string getName();		//In order to modify the members getName will be used (declarated in person.cpp)
	int getNumber();

};

#endif /* PERSON_H_ */
