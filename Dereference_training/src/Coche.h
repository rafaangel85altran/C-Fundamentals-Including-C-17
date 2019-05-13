/*
 * Coche.h
 *
 *  Created on: 10 may. 2019
 *      Author: jrangel
 */

#ifndef COCHE_H_
#define COCHE_H_

class Coche {
public:
	Coche(int maxspeed);
	virtual ~Coche();
	int getModel();
private:
	int maxspeed;
};

#endif /* COCHE_H_ */
