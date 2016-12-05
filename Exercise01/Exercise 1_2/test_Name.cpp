// Project		2. semester exercises
//
// File			test_Name.cpp
//
// Description	Test of class Name
//
// Author		NVJ
//
// Version		1.0 - 240812 - originally version

#include "Name.h"


void main()
{
	string first, last;

	Name n1;

	n1.printName();

	Name n2( "Kurt", "hansen" );

	n2.printName();

	cout << "\nIndtast et navn ( Eksempel: Bo Hald ): ";
	cin >> first >> last;
	n1.setName( first, last );

	n1.printName();
}