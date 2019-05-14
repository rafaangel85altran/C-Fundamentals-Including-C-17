/*
 * classes_examlpe_overloading_constructor.cpp
 *
 *  Created on: 14 may. 2019
 *      Author: jrangel
 */

#include <iostream>
using namespace std;

class Rectangle {
	private:
		int width, height;
	public:
		Rectangle();				//default constructor, is called when an object is called with no arguments
		Rectangle(int,int);			//custom constructor, is called when an object is called with two ints
		int area (void) {return (width*height);}
};

Rectangle::Rectangle () {			//Overload is take profit of similar definitions of the same element, like now. The same constructor is being called
	width = 5;						//Using different constructor declarations for the same class with different purposses is overload
	height = 5;
}

Rectangle::Rectangle(int a, int b) {
	width = a;
	height = b;
}

int main () {
	Rectangle rect (3,4);			//Depending on the object declaration the compiler will know wich constructor needs to apply
	Rectangle rectb;

	cout << rect.area() << endl;
	cout << rectb.area() << endl;

	return 0;
}


