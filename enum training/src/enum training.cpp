//============================================================================
// Name        : enum.cpp
// Author      : jrangel
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

enum mitipodevariable {normal = -1 ,wet, snow, sports};		//enum permite definir nuestro propio tipo de variables y su scope

/*
 * enum EDriveMode
{
   DRIVEMODE_UNKNOWN = -1,
   DRIVEMODE_NORMAL,
   DRIVEMODE_RESCUE,
   DRIVEMODE_REVERSE,
   DRIVEMODE_TOW,
   DRIVEMODE_LIMITED_PERFORMANCE,
   DRIVEMODE_FIX_SPEED_LIMIT,
   DRIVEMODE_BATT_BACKUP,
   DRIVEMODE_MAX_NUMBER
};
 * */

int main() {

	mitipodevariable Tipodecoche = sports;	//

	 cout << Tipodecoche;

	return 0;
}
