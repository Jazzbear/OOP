// Projekt		�velser 2. semester
//
// Fil			test_CircularBuffer-int.cpp
//
// Beskrivelse	Testprogram til klassen CircularBuffer
//
// Forfatter	NVJ
//
// Version		1.0 - 120905 - oprindelig version

#include <iostream>

using namespace std;

#include "CircularBuffer-int.h"


int main()
{
	CircularBuffer buffer1(5);

	buffer1.print();

	for(int i=0; i<3; i++ )
		buffer1.insert( i );

	buffer1.print();

	cout << "\nMiddel: " << buffer1.meanValue() << endl;

	buffer1.insert( 20 ).print();

	return 0;
}