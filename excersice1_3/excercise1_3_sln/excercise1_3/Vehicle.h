// Projekt		2. semester exercises
//
// Fil			Vehicle.h
//
// Beskrivelse	Definition of class Vehicle
//
// Forfatter	xx
//
// Version		1.0 - xxxxxx - originally version

#pragma once

#include <iostream>
#include <string>
#include "Name.h"
#include "Date.h"

using namespace std;


class Vehicle
{
public:
	Vehicle( string model, char fuel, int weight ); //Default constructor for Vehicle.
	void printCertificate(void) const; //Const so the information, cant be altered when called with the print function.
	void setOwner(string, string); //To set Owner typed in as 2 name strings
	bool setRegDate(int, int, int); //To set date in the format d/m/y.
	bool setRegNr(string); //To set registration number in the format of XX00000

private:
	bool checkRegNr(void) const;
	string model_;		// No limitations
	char fuel_;			// Valid values: 'B'(Benzin), 'D'(Diesel) and 'X'(unknown type). Default: 'X' 
	int weight_;		// Valid values: positive numbers. Default: 0
	string regNr_;		// Valid values: exactly 7 chararters
						//				 first 2 characters: capital letters
						//				 next 5 characters: numbers 0 to 9
						//				 Default: "XX00000"
	Date regDate_;
	Name owner_;
};
