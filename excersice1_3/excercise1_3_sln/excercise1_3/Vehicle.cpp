// Projekt		2. semester exercises
//
// Fil			Vehicle.cpp
//
// Beskrivelse	Implementation of class Vehicle
//
// Forfatter	ATG
//
// Version		1.0 - 191116 - originally version

#include "Vehicle.h"

Vehicle::Vehicle(string model, char fuel, int weight) //Uses the default constructor, to load in model, fuel and weight + reg. nr into the private attributes
{
	model_ = model;
	fuel_ = ((fuel == 'B' || fuel == 'D') ? fuel : 'X');
	weight_ = (weight > 0 ? weight : 0);
	setRegNr("XX00000");

}

bool Vehicle::setRegNr(string regNr) //inputs regNr into he private attribute, regNr_ and uses function checkRegNr to see if its a valid reg. nr, if not it sets it to default and returns false.
{
	regNr_ = regNr;
	if (checkRegNr() == false)
	{
		regNr_ = "XX00000";
		return false;
	}
	return true;
}

bool Vehicle::setRegDate(int day, int month, int year)
{
	return regDate_.setDate(day, month, year); //regDate_ calls the member function setDate to fill in registratin date.
}

void Vehicle::setOwner(string firstName, string lastName)
{
	owner_.setName(firstName, lastName);//owner_ calls member function setName to fill in name of the car owner.
}


void Vehicle::printCertificate() const // print function prints out all the user inputs.
{
	cout << "\nRegistreringsattest" << endl;
	cout << "-------------------" << endl;
	cout << "Model:      " << model_ << endl;
	cout << "Braendstof: " << fuel_ << endl;
	cout << "Vaegt:      " << weight_ << endl;
	cout << "Reg.dato:   ";

	regDate_.printDate();

	cout << "Reg.nr.:    " << regNr_ << endl;
	cout << "Ejer:       ";

	owner_.printName();

	cout << "-------------------\n\n";
}

bool Vehicle::checkRegNr(void) const //checks if the registration number is valid. Constricts the user to only input correct and valid information.
{
	if (regNr_.length() != 7)//Is the reg. nr not 7 characters, it returns false.
		return false;
	
	for (int i = 0; i < 2; i++)
		if (regNr_[i] < 'A' || regNr_[i] > 'Z')//Is the first 2 characters not within the aplhabet A-Z, it returns false
			return false;
	
	for (int j = 2; j < 7; j++) //If the last 5 numbers 2-7 not characters within 0-9 then it returns false.
		if (regNr_[j] < '0' || regNr_[j] > '9')
			return false;

	return true;
}