/*
 * classes_const_example_uniform_and_formal.cpp
 *
 *  Created on: 14 may. 2019
 *      Author: jrangel
 */

#include <iostream>

using namespace std;

class Circle {
	private:
		double radius;
	public:
		Circle (double r) {radius = r;}		//Constructor inline
		double circum() {return 2*3.141592*radius;}
};

int main () {

	Circle foo(10.0);		//fucntional form
	Circle bar = 20.0;		//assignment init
	Circle baz {30.0};		//uniform init			An advantage of uniform initialization over functional form is that, unlike parentheses,
	Circle qux = {40.0};	//POD-like				braces cannot be confused with function declarations, and thus can be used to explicitly call default constructors

	cout << "foo´s circunference: " << baz.circum() << endl;


	return 0;
}


