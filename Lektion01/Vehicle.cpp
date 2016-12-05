// Projekt		2. semester exercises
//
// Fil			Vehicle.cpp
//
// Beskrivelse	Implementation of class Vehicle
//
// Forfatter	xx
//
// Version		1.0 - xxxxxx - originally version

#include "Vehicle.h"


void Vehicle::printCertificate() const
{
	cout << "\nRegistreringsattest" << endl;
	cout << "-------------------" << endl;
	cout << "Model:      " << model_ << endl;
	cout << "Braendstof: " << fuel_ << endl;
	cout << "Vaegt:      " << weight_ << endl;
	cout << "Reg.dato:   ";

	regDate_.print();

	cout << "Reg.nr.:    " << regNr_ << endl;
	cout << "Ejer:       ";

	owner_.print();

	cout << "-------------------\n\n";
}