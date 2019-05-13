/*
 * Coche.cpp
 *
 *  Created on: 10 may. 2019
 *      Author: jrangel
 */

#include "Coche.h"

Coche::Coche(int max)
: maxspeed(max)
{
	maxspeed = 120;
	// TODO Auto-generated constructor stub
}

Coche::~Coche() {
	// TODO Auto-generated destructor stub
}

int Coche::getModel() {
	return maxspeed;
}
