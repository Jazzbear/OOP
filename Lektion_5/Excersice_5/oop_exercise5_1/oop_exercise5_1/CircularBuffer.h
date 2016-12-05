#pragma once

class CircularBuffer
{
public:
	CircularBuffer & insert(int);
	double meanValue();
	void print;
private:
	int size_;
	int newestIndex_;
	int arrayPtr_;
};