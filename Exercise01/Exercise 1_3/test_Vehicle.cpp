#include "Vehicle.h"


int main()
{
	cout << "==============================" << endl;
	cout << "Test case: Explicit constructor" << endl;
	cout << "------------------------------" << endl;
	Vehicle vehicle("Skoda Fabia", 'B', 1050);
	vehicle.printCertificate();
	cout << "==============================" << endl << endl;



	cout << "==============================" << endl;
	cout << "Test case: Valid name set" << endl;
	cout << "------------------------------" << endl;
	vehicle.setOwner("Troels", "Jensen");
	vehicle.printCertificate();
	cout << "==============================" << endl << endl;



	cout << "==============================" << endl;
	cout << "Test case: Error in reg number string length" << endl;
	cout << "------------------------------" << endl;
	vehicle.setRegNr("AB2345");
	vehicle.printCertificate();
	cout << "==============================" << endl << endl;



	cout << "==============================" << endl;
	cout << "Test case: Error in reg number char 0" << endl;
	cout << "------------------------------" << endl;
	vehicle.setRegNr("xB12345");
	vehicle.printCertificate();
	cout << "==============================" << endl << endl;


	cout << "==============================" << endl;
	cout << "Test case: Error in reg number char 1" << endl;
	cout << "------------------------------" << endl;
	vehicle.setRegNr("Ax12345");
	vehicle.printCertificate();
	cout << "==============================" << endl << endl;


	cout << "==============================" << endl;
	cout << "Test case: Error in reg number char 2" << endl;
	cout << "------------------------------" << endl;
	// Error in reg number char 2
	vehicle.setRegNr("ABA2345");
	vehicle.printCertificate();
	cout << "==============================" << endl << endl;


	
	cout << "==============================" << endl;
	cout << "Test case: Valid reg number set" << endl;
	cout << "------------------------------" << endl;
	vehicle.setRegNr("AB12345");
	vehicle.printCertificate();
	cout << "==============================" << endl << endl;

	cout << "==============================" << endl;
	cout << "Test case: Invalid date set" << endl;
	cout << "------------------------------" << endl;
	vehicle.setRegDate(31, 2, 2016);
	vehicle.printCertificate();
	cout << "==============================" << endl << endl;

	cout << "==============================" << endl;
	cout << "Test case: Valid date set" << endl;
	cout << "------------------------------" << endl;
	vehicle.setRegDate(31, 1, 2016);
	vehicle.printCertificate();
	cout << "==============================" << endl << endl;

	return 0;
}