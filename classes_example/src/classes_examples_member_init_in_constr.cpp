/*
 * classes_examples_member_init_in_constr.cpp
 *
 *  Created on: 14 may. 2019
 *      Author: jrangel
 */

#include <iostream>
using namespace std;

class Rectangle {
	private:
		int height, width;
	public:
		Rectangle::Rectangle (int x, int y) : width(x), height(y) {}		//When a constructor is used to initualize other members there is the possibility
		int area() {return (height*width);}									//of
};

int main () {

	return 0;
}


