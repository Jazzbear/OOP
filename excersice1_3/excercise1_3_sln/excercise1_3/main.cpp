// Projekt		2. semester exercises
//
// Fil			main.cpp
//
// Beskrivelse	Main fil til at teste klassen vehicle
//
// Forfatter	ATG
//
// Version		1.0 - 191116 - originally version
#include "Vehicle.h"


int main()
{
	cout << "==============================" << endl;
	cout << "Test case: Explicit constructor" << endl;
	cout << "------------------------------" << endl;
	Vehicle vehicle("Masta 2", 'B', 950);
	vehicle.printCertificate();
	cout << "==============================" << endl << endl;

	cout << "==============================" << endl;
	cout << "Test case: Valid name set" << endl;
	cout << "------------------------------" << endl;
	vehicle.setOwner("Martin", "Albrektsen");
	vehicle.printCertificate();
	cout << "==============================" << endl;

	cout << "==============================" << endl;
	cout << "Test case: Error in the reg. nr string length" << endl;
	cout << "------------------------------" << endl;
	vehicle.setRegNr("ZY2028");
	vehicle.printCertificate();
	cout << "==============================" << endl;

	cout << "==============================" << endl;
	cout << "Test case: Error in reg. nr char 0" << endl;
	cout << "------------------------------" << endl;
	vehicle.setRegNr("zY20286");
	vehicle.printCertificate();
	cout << "==============================" << endl;

	cout << "==============================" << endl;
	cout << "Test case: Error in reg. nr char 1" << endl;
	cout << "------------------------------" << endl;
	vehicle.setRegNr("Zy20286");
	vehicle.printCertificate();
	cout << "==============================" << endl;

	cout << "==============================" << endl;
	cout << "Test case: Error in reg. nr char 2" << endl;
	cout << "------------------------------" << endl;
	vehicle.setRegNr("ZYZ2028");
	vehicle.printCertificate();
	cout << "==============================" << endl;

	cout << "==============================" << endl;
	cout << "Test case: Valid reg. number" << endl;
	cout << "------------------------------" << endl;
	vehicle.setRegNr("ZY20286");
	vehicle.printCertificate();
	cout << "==============================" << endl;

	cout << "==============================" << endl;
	cout << "Test case: Invalid date set" << endl;
	cout << "------------------------------" << endl;
	vehicle.setRegDate(32, 8, 2009);
	vehicle.printCertificate();
	cout << "==============================" << endl << endl;

	cout << "==============================" << endl;
	cout << "Test case: Valid date set" << endl;
	cout << "------------------------------" << endl;
	vehicle.setRegDate(8, 8, 2009);
	vehicle.printCertificate();
	cout << "==============================" << endl << endl;

}