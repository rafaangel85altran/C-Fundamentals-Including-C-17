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
	string firstname;
	string lastname;
	int arbitrarynumber;

public:
	Person();
	virtual ~Person();
	string getName();

};

#endif /* PERSON_H_ */
