// Project		2. semester exercises
//
// File			test_Date.cpp
//
// Description	Test of class Date
//
// Author		NVJ
//
// Version		1.0 - 240812 - originally version

#include "Date.h"


void main()
{
	int myDay, myMonth, myYear;
	bool check;

	Date d1;

	d1.printDate();

	Date d2(29, 2, 2012);

	d2.printDate();

	do
	{
		cout << "\nIndtast en dato ( Eksempel: 12 3 2004 ): ";
		cin >> myDay >> myMonth >> myYear;
		check = d1.setDate( myDay, myMonth, myYear );

		if( check == false )
			cout << "\nUgyldig dato!" << endl;

	}while( check == false );

	d1.printDate();
}