// Projekt		2. semester exercises
//
// Fil			Test.cpp
//
// Beskrivelse	Test of class Vehicle
//
// Forfatter	NVJ
//
// Version		1.0 - 220812 - originally version

#include "Vehicle.h"


void main()
{
	string fname, lname;
	int counter = 0, day, month, year;
	bool check;
	string number;
	char answer;
	const int SIZE = 3;
	Vehicle carArray[ SIZE ] = { Vehicle("Volvo S40", 'B', 1225 ),
								 Vehicle( "VW Golf", 'D', 1175 ),
								 Vehicle( "Fiat 500", 'B', 650 ) };

	do
	{
		system( "cls" );
		cout << "Indtast ejerens navn: ";
		cin >> fname >> lname;
		carArray[ counter ].setOwner( fname, lname );

		do
		{
			cout << "\nIndtast registreringsnummer: ";
			cin >> number;
			check = carArray[ counter ].setRegNr( number );

			if( check == false )
				cout << "\nFejl i registreringsnummer!" << endl;

		}while( check == false );

		cout << "\nIndtast registreringsdato ( 12 3 2004 ): ";
		cin >> day >> month >> year;
		carArray[ counter ].setRegDate( day, month, year );

		carArray[ counter ].printCertificate();

		counter++;

		if( counter < SIZE )
		{
			cout << "\nSkal der indtastes flere data? ";
			cout << "Tast 'j' for JA og alt andet for NEJ: ";
			cin >> answer;
		}

	}while( ( answer == 'j' || answer == 'J' ) && counter < SIZE );
}