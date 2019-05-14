//============================================================================
// Name        : classes_example.cpp
// Author      : jrangel
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Rectangle {
private:
	int width, height;					//class members that are not supose to be accessed from anywhere
  public:								//by default members are private
	void set_values (int ,int);
 /*   void set_values (int x,int y) {
    	width = x;						//there is no difference if the initialization is done in the member function declaration intself (inline)
    	height = y;
    }
*/
    int area() {return width*height;}
};


void Rectangle::set_values (int x, int y) {	//in order to define to member functions class_name::member_function() {initialize}
  width = x;								//defining the member function later on the code makes no difference appart of the compiler optimization (outline)
  height = y;
}


int main () {
  Rectangle rect;
  rect.set_values (3,4);
  cout << "area: " << rect.area();
  return 0;
}
